#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX],f=-1,r=-1,i=0;

void enqueue()
{
    int ele;
    if ( r == MAX-1 )
    {
        printf("\n overflow");
        return;
    }
    else if( r == -1 && f == -1 )
    {
        f = r = 0;
    }
    else
    {
        r++;
    }
    printf("\n enter the element to be insnerted  ");
    scanf("%d",&ele);
    queue[r]=ele;
}

void dequeue()
{
    if ( f == -1 || f > r )
    {
        printf("\n underflow \n");
    }
    else
    {
        f++;
    }
    queue[f-1]=0;
}

void dis()
{
    if (f == -1 || f > r )
    {
        printf("\n empty");
    }    
    else
    {
        printf("\n  queue : ");
        for(i=f; i<=r; i++)
        {
            printf("%d ",queue[r]);
        }
    }

}

int main()
{

    int choice;
    while(1)
    {
        printf("\nEnter the Choice\n 1.enqueue \n 2.dequeue\n 3.display\n 4.exit\n ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				dis();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid option ! Try Again..");
        }
        
    }
    return 0;
}
