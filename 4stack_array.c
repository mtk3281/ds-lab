#include <conio.h>
#include <stdio.h>

int stack[5],top=-1,size=5;

void dis()
{
    if (top<=-1)
    {
        printf("\n empty stack \n" );
    }
    else
    {
    printf("\n element in stack are :  \n");
    for(int i=0; i<=top; i++)
    {
        printf("%d ",stack[i]);
    }
    }
}

void push(int ele)
{
    if ( top >= size-1 )
    {
        printf("\n overflow condition occur \n ");
    }
    else
    {
        printf("element %d is added to stack ",ele);
        top++;
        stack[top]=ele;
        dis();
    }

}

void pop()
{
    if ( top<=-1 )
    {
        printf("\n underflow occur \n");
    }
    else
    {
        printf("\n  %d is removed ",stack[top]);
        stack[top]=0;
        top=top-1;
        dis();
    }
}

int main()
{
    int op,e;
    do
    {
        printf("\n enter the operation to be performed \n 1:push \n 2:pop \n 3:display \n");
        scanf("%d",&op);
        switch (op)
        {

        case 1:  printf("\n enter the element to be inserted \n");
                 scanf("%d",&e);
                 push(e);
                 break;

        case 2:  pop();
                 break;

        case 3:  dis();
                 break;

        default: printf("\n enter the correct option \n");
        
        }

    }while (1);
    return 0;
}
