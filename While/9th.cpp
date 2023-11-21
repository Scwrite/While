#include<stdio.h>
main()
{
	int n,r=0,sum,t;
	printf("Enter no");
	scanf("%d" ,&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(t==sum)
	printf("Armstrong no");
	else
	printf("Not Armstrong no");
}
