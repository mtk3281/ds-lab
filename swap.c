#include <stdio.h>

void dis(int *p,int m)
{
	int i=0;
	while(i<m)
	{
		printf("%d ",*p);
		p++;
		i++;
	}
}

void swap(int *p,int *q,int size)
{
	int i=0;
    while(i<size)
    {
        *p ^= *q;
        *q  ^= *p;
        *p ^= *q;
        p++,q++,i++;
	}

}

int main()
{
	int a[]={11,3,4,6,78,9},b[]={22,33,44,55,66,77},m;
	m=sizeof(a)/4;
	printf("before swapping \n array 1 : ");
	dis(a,m);
	printf("\n array 2 : ");
	dis(b,m);
	swap(a,b,m);
	printf("\n after swapping : \n array 1 :");
	dis(a,m);
	printf("\n array 2 : ");
	dis(b,m);
	return 0;
}
