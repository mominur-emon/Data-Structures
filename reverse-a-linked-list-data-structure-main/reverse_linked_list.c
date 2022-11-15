/*C  program to reverse a linked list using recursion*/

#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head;

int insert_node(int data)
{

    struct node* newnode = (struct node*)malloc(sizeof(struct node*));

    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

int reverse(struct node* p)
{

    if(p->next == 0)
    {

        head = p;
        return;
    }
    reverse(p->next);

    struct node* rev = p->next;
    rev->next = p;
    p->next = 0;
}

int print()
{

    struct node* p;
    p = head;

    while(p!= 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{

  head = 0;

  int n,i,x;
  printf("How many number : ");
  scanf("%d",&n);

  printf("Enter the number : ");
  for(i=0;i<n;i++)

  {
      scanf("%d",&x);
      insert_node(x);

  }

  print();
  reverse(head);

}
