#include <conio.h>
#include <stdio.h>

struct node{

    int data;
    struct node *ptr;
}; 

struct node *head=NULL,*temp=NULL,*temp1;
int s;

int create()
{
    temp=(struct node *)malloc(sizeof(struct node *));
      if(temp==NULL)
        {
                printf("\n Out of Memory Space: \n");
                return 0;
        }
        return 1;
}

void print()
{
    temp=head;
    if (temp == NULL)
    {
        printf("\n empty linked list \n");
    }
    printf(" \n linked list = ");
    while( temp != NULL)
    {
        printf(" %d  ",temp->data);
        temp=temp->ptr;
    }
    
}


void insert_front()
{
    s=create();
    if (s==1)
    {
        printf("\n enter the number to insert \n");
        scanf("%d",&temp->data);
        temp->ptr=head;
        head=temp;
        printf(" \n %d inserted at beginning ",temp->data);        
    }
}

void insert_end()
{
        s=create();
        if (s==1)
         {
            printf("\n Enter the data value for the node: \t" );
            scanf("%d",&temp->data );
            temp->ptr =NULL;
            if(head==NULL)
            {
                    head=temp;
            }
            else
            {
                    temp1=head;
                    while(temp1->ptr !=NULL)
                    {
                            temp1=temp1->ptr ;
                    }
                    temp1->ptr =temp;
                    printf(" \n %d inserted at end ",temp->data);  
            }
        }
}

void delete_front()
{
    temp=(struct node *)malloc(sizeof(struct node *));
    if (head==NULL)
    {
        printf("\n underflow ");
    }
    else
    {
        temp=head;
        head=temp->ptr;
        free(temp);
        printf(" \n element deleted from front ");        
    }
}

void delete_end()
{
        if(head==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else
        {
                temp=head;
                while(temp->ptr->ptr != NULL)
                {
                        temp=temp->ptr;
                }
                temp1=temp;
                temp=temp->ptr;
                temp1->ptr=NULL;
                printf("\n deleted element is %d ",temp->data);
                free(temp);
        }
}

void insert_pos()
{
    s=create();
    if (s==1)
    {
         printf("\n Enter the data value for the node: \t" );
            scanf("%d",&temp->data );
            temp->ptr =NULL;
            if(head==NULL)
            {
                head=temp;
            }
            else
            {
                printf("\n enter the position value \n");
                int pos,i=1;
                scanf("%d",&pos);
                temp1=head;                
                while(i<pos)
                {
                    temp1=temp1->ptr;
                    i++;
                }
                temp->ptr=temp1->ptr;
                temp1->ptr=temp;
            }
    }

}

void delete_pos()
{
    if(head==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else
        {
                struct node *temp2;
                temp2=(struct node *)malloc(sizeof(struct node *));
                temp=head;
                int pos,i=1;
                printf("\n enter the pos value \n");
                scanf("%d",&pos);
                while(i < pos)
                {
                        temp1=temp;
                        temp=temp->ptr;
                        i++;
                }
                temp1->ptr=temp->ptr;
                printf("\n deleted element is %d ",temp->data);
                free(temp);
        }

}

int main()
{

    int o;
    while (1)
    {
    printf(" \n enter your choice \n 1: insert at front \n 2: insert rear \n 3: insert at any pos \n"
 " 4: delete from front \n 5: delete from rear \n 6: delete from any pos \n 7: display the linked list \n 8: exit \n");
    scanf("%d",&o);
        switch (o)
        {
            case 1: insert_front();
                    break;

            case 2: insert_end();
                    break;

            case 3: insert_pos();
                    break;
                    
            case 4: delete_front();
                    break;
            
            case 5: delete_end();
                    break;
            
            case 6: delete_pos();
                    break;     
        
            case 7: print();
                    break;
            
            case 8: print("\n exiting");
                    break;
         }
    }
    return 0;
}


