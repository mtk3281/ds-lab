#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
         int i=0,j=0,k=0,m,n;
        printf(" enter the size of 2 arrays \n");
	scanf("%d%d",&m,&n);
	int a[m],b[n],c[m+n];
	printf("\n enter the array 1 elements \n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the array 2 elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}

         for (i=0;i<m+n;i++)
         {
                if (i%2==0 || i==0)
                {
                        c[i]=a[j];
                        j++;
                }
                else
                {
                        c[i]=b[k];
                        k++;
                }
         }
          for (i=0;i<m+n;i++)
         {
                printf("%d",c[i]);
         }
        return 0;
}
