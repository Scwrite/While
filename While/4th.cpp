#include<stdio.h>
main()
{ 
	int n,t,rem,sum=0;
	printf("Enter the no");
	scanf("%d" ,&n);
	t=n;
	while(n>0)
	{
		rem=n%10;
		sum=(rem*rem*rem)+rem;
		n=n/10;		
	}
	if (t==sum)
	printf("The number is armstrong number");
	else
	printf("The number is not an armstrong number");
	return 0;	
}
