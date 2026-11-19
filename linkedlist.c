#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node ("NODE");
NODE getnode(int item)
{
    int temp,tail,NODE;
    NODE temp = (NODE)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("memory allocation failed\n");
        exit(1);
    }

    temp->data=item;
    temp->next=NULL;
    return (temp);
}
void display(NODE head)
{
    if(head == NULL)
    {
        printf("list is empty");
    }
    printf("list");
    for(NODE cur = head; cur != NULL; cur = cur-> next)
    printf("%d",cur->data);
}
int main(void)
{
    int n,i;
    int item;
    NODE temp,head;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter a number");
    scanf("%d",&item);
    printf("enter %d integers",n);
    for(i=0;i<n;i++)
         for(;;)
         {
            printf("enter a item");
            scanf("%d",&item);
            if (head == NULL)
         {
            head = temp;
         }
            else
            {
             tail -> next = temp;
             tail = temp;
            } 
         }
         display(head);
         return 0;
}
