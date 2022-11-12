#include <stdio.h>
int main()
{
	int i,j,n,m;
	printf(" enter the size of 2 arrays \n");
	scanf("%d%d",&m,&n);
	int a[m],b[n],c[m+n];
	printf("\n enter the array 1 elements \n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	printf("\n enter the array 2 elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		j=i+m;
		c[j]=b[i];
	}
	printf("\n merged array : ");
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
