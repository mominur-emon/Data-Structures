/*create BST - Insert Operation, Search Operation, Traversal Operation Perform Pre, Post and In-order traversal of BST, Smallest and Largest Element Searching Operation*/

#include<stdio.h>
#include<stdlib.h>

#define FALSE_VALUE 0
#define TRUE_VALUE 1

struct treeNode
{
    int item;
    struct treeNode * left;
    struct treeNode * right;
};

struct treeNode * root;


void initializeTree()
{
    root = 0;
}

struct treeNode * makeTreeNode(int item)
{
    struct treeNode * node ;
    node = (struct treeNode *)malloc(sizeof(struct treeNode));
    node->item = item;
    node->left = 0;
    node->right = 0;
    return node;
};

struct treeNode * insertItem(struct treeNode * node, int item)
{
    if (root==0)
    {
        root=makeTreeNode(item);
        return root;
    }

    if (node == 0)

        return makeTreeNode(item);

    else
    {
        if (item < node->item)
            node->left = insertItem(node->left, item);
        if(item>node->item)
            node->right = insertItem(node->right, item);

        return(node);
    }
}
struct treeNode * searchItem(struct treeNode * node, int item)
{
    if(node==0)
        return 0;

    if(node->item==item)
        return node;
    else
    {
        if(item < node->item)
            searchItem(node->left,item);

        else
            searchItem(node->right,item);
    }

};


void printPreOrder(struct treeNode * node)
{
    if(node==0)
    return;
    printf(" %d ",node->item);
    printPreOrder(node->left);
    printPreOrder(node->right);
}


void printPostOrder(struct treeNode * node)
{

    if(node==0)
    return;
    printPostOrder(node->left);
    printPostOrder(node->right);
    printf(" %d ",node->item);
}
void printInOrder(struct treeNode * node)
{
    if(node==0)
    return;
    printInOrder(node->left);
    printf(" %d ",node->item);
    printInOrder(node->right);
}


int getMinItem(struct treeNode * node)
{
    if(node->left==0)
        return node->item;

    else
        getMinItem(node->left);

}

int getMaxItem(struct treeNode * node)
{

    if(node->right==NULL)
        return node->item;

    else
        getMaxItem(node->right);

}

int main(void)
{
    initializeTree();
    while(1)
    {
        printf("\n1.Insert operation\n2.Search operation\n3.Traversal operation\n");
        printf("5.Smallest and Largest Element Searching Operation\n\n");
        int ch;
        scanf("%d",&ch);
        if(ch==1)
        {
            int item;
            printf("Enter Item : ");
            scanf("%d", &item);
            insertItem(root, item);
        }
        else if(ch==2)
        {
            int item;
            printf ("Enter Item : ");
            scanf("%d", &item);
            struct treeNode * res = searchItem(root, item);
            if(res!=0)
            printf("Item %d Found.\n\n",res->item);
            else
            printf(" Item %d Not found.\n\n");
        }
        else if(ch==3)
        {
            int ch1;
            printf("Choose your order..\n1.pre-order\n2.post-order\n3.In-order\n");
            scanf("%d",&ch1);
            if(ch1==1)
            {
                printPreOrder(root);

            }
            else if(ch1==2)
            {
                printPostOrder(root);


            }
            else if(ch1==3)
            {
                printInOrder(root);

            }
        }


        else if(ch==5)
        {
            int ch2;
            printf("1.Find Minimum\n2.Find Maximum\n");
            scanf("%d",&ch2);

            if(ch2==1)
            {
                printf("Minimum is %d\n\n",getMinItem(root));
            }
            else if(ch2==2)
            {
                printf("Maximum is %d\n\n",getMaxItem(root));
            }
        }
        else break;


    }
}



