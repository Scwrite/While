#include<stdio.h>
main()
{
	int n,r,revno=0,sum;
	printf("Enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		revno=revno*10+r;
		n=n/10;	
	}
	printf("The number after reverse is= %d" ,revno);
}
