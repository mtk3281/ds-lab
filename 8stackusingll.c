#include <stdio.h>
#include <stdlib.h>
#define max 5;

struct node
{
    int data;
    struct node *next;

};

struct node  *top, *temp;

void push()
{
    temp=(struct node *) malloc (sizeof(struct node *));
    if (temp==NULL)
    {
        printf("\n memory error ");
    }
    else
    {
        int ele;
        printf("\n enter the element to be inserted ");
        scanf("%d",&ele);
        if ( top == NULL )
        {
            temp->data=ele;
            temp->next=NULL;
            top=temp;
        }
        else
        {
            temp->data=ele;
            temp->next=top;
            top=temp;
        }
        
    }
    printf(" \n item pushed ");
}

void pop()
{
    if (top == NULL)
    {
        printf("\n underflow ");
    }
    else
    {
        int item=top->data;
        temp=top;
        top=top->next;
        free(temp);
        printf("\n deleted element is %d",item);
    }
}

void dis()
{
    if (top == NULL)
    {
        printf("\n empty ");
    }
    else
    {
        temp=top;
        printf("\n elements = ");
        while(temp !=NULL)  
        {  
            printf(" %d ",temp->data);  
            temp = temp->next;  
        }  
    }
}
int main()
{

    int choice;
    while(1)
    {
        printf("\nEnter the Choice\n 1.push \n 2.pop \n 3.display\n 4.exit\n ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
				push();
				break;
			case 2:
				pop();
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
