#include<stdio.h>
main()
{
		int n, revno=0,rem;
		printf("Enter 4 digit number");
		scanf("%d" ,&n);
		while(n>0)
		{
				rem=n%10;
				revno=revno*10+rem;
				n=n/10;
		}
	printf("reverse number =%d" ,revno);
}
