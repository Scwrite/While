#include<stdio.h>
main()
{
	int n,r=0,sum;
	printf("Enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	printf("Sum of the number is =%d" ,sum);
}
