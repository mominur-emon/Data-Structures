/*Adding a new data/node in stack is a more than one step activity. create a node using  structure and find the location .*/
/*After completing have a newly created stack. Now perform the pop operation on  it.*/
/*push ,print,pop */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *head,*top,*temp1,*temp,*value;
int i;



void main()
{
    int val, choice, e;

    printf("\n 1 : Push stack");
    printf("\n 2 : Print stack");
    printf("\n 3 : Pop stack");
    printf("\n 0 : Exit");

    create();

    while(1)
    {
        printf("\n\nEnter Choice :\t");
        scanf("%d",&choice);

        switch(choice)
        {
        case 0:
            exit(0);
            break ;

        case 1:
            printf("Enter data : ");
            scanf("%d", &val);
            push(val);
            break;

        case 2:
            display();
            break;

        case 3:
            pop();
            break;

        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;

        }
    }

}
void create()
{
    top = NULL;
}
void push(int data)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->info=data;
    new_node->next=NULL;
    if(top==NULL)
    {
        top = new_node;
    }
    else
    {
        new_node->next= top;
        top = new_node;
    }

}

void display()
{
    temp1 = top;

    if (temp1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (temp1 != NULL)
    {
        printf("%d ", temp1->info);
        temp1 = temp1->next;
    }
 }

 void pop()
{

    if (top == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
    {
        temp1 = top;
        top=top->next;
        printf("\n Popped value : %d",temp1->info);
        free(temp1);

    }
}
