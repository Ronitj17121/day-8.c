#include<stdio.h>
#include<conio.h>

void main()
{
	
	int n;
	printf("Enter n  :");
	scanf("%d",&n);
	
	while(n>=1)
	{
		if(n%2==1)
		{
			printf("%d ",n);
		}
		n--;
	}
	
}
