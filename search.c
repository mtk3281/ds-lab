#include <stdio.h>
int main()
{
	int a[]={11,3,4,6,78,9,4,2,32,42},i,ele,f=0;
	printf(" array = ");
	for(i=0;i<(sizeof(a)/4);i++)
	{
		printf("%d ",a[i]);
	}
	printf(" \n enter the element to search \n ");
	scanf("%d",&ele);
	for(i=0;i<(sizeof(a)/4);i++)
	{
		if (ele==a[i])
		{
			printf("\n %d is found on pos %d ",a[i],i+1);
			f=1;
			break;
		}
	}
	if (f==0)
	{
		printf("\n element not found ");
	}
	return 0;
}
