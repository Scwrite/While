#include<stdio.h>
main()
{
		int n,sum=0,rem=0;
		printf("Enter the 4 digit number");
		scanf("%d" ,&n);
		while(n>0)
		{
			rem=n%10;
			sum=sum+rem;
			n=n/10;
		}
		printf("Addition of digit of 4 digit number=%d" ,sum);
}
