#include <stdio.h>
int main()
{
	int i,j,t,n;
    printf("enter the size of the array \n");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the elements in the array \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i=0; i<n; i++ )
    {
        for( j=0; j<n; j++ )
        {
             if ( a[i] < a[j] )
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
             }
        }      
    }

    printf("\n array after sorting = ");

	for ( i=0; i<n; i++ ) 
	{
		printf("%d ",a[i]);
	}

	return 0;
}