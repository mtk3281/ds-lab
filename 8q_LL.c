#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

};

struct node  *r=NULL , *f=NULL , *temp;

void enqueue()
{
    temp=(struct node *) malloc(sizeof(struct node *));
    int ele;
    printf("\n enter the element to be inserted : ");
    scanf("%d",&ele);
    temp->data=ele;
    if (r==NULL && f==NULL)
    {
        f=temp;
        r=temp;
        f->next=NULL;
        r->next=NULL;
    }
    else
    {
        r->next=temp;
        r=temp;
        r->next=NULL;
    }

}

void dequeue()
{
    if(f==NULL)
    {
        printf("\n underflow");
    }
    else
    {
        temp=f;
        printf(" %d element is removed ",f->data);
        f=f->next;
        free(temp);
    }

}

void dis()
{
    if (f == NULL)
    {
        printf("\n empty ");
    }
    else
    {
        temp=f;
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
        printf("\nEnter the Choice\n 1.enqueue \n 2.dequeue \n 3.display\n 4.exit\n ");
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
