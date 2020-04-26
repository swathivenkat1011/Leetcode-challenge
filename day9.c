#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node k;
k *first=NULL;
k *last=NULL;
k *newnode;
k *temp;
k *create(int);
void insert();
k *create(int x)
{
    newnode=(k*)malloc(sizeof(k));
    if(newnode!=NULL)
    {
        newnode->data=x;
        newnode->next=NULL;
    }
    else
    {
        printf("newnode is not created");
    }
    return newnode;
}
void insert()
{
    int a;
    printf("Enter the element to insert\t");
    scanf("%d",&a);
    newnode=create(a);
    if((first==NULL)&&(last==NULL))
    {
        first=newnode;
        last=newnode;
        first->next=NULL;
        last->next=NULL;
    }
    else
    {
        last->next=newnode;
        last=newnode;
    }
}
int main()
{
    int i,n,mid;
    printf("Enter the no of elemnts in linked list\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        insert();
    }
    mid=n/2;
    temp=first;
    for(i=1;i<=mid;i++)
    {
        temp=temp->next;
    }
    printf("The middle node is %d",temp->data);
}
