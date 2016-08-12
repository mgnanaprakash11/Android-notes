#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data;
    struct node *next,*first;
};
void insert(struct node **head,char a)
{
    struct node *nn=(struct node *)malloc(sizeof(struct node));
    nn->data=a;
    nn->next=NULL;
    if(*head==NULL)
    {
        *head=nn;
         nn->first=NULL;
    }
    struct node *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    nn->first=temp->next;
    temp->next=nn->first;

    return;
}
int palindrome(struct node **head,int n)
{
    int i;
    struct node *temp=*head,*ff=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    for(i=0;i<n/2;i++)
    {
        if(temp->data==ff->data)
        {
            temp=temp->first;
            ff=ff->next;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    struct node *head=NULL;
    char a[50];
    scanf("%s",a);
    int  n=strlen(a);
    for(int i=0;i<n;i++)
    {
        insert(&head,a[i]);
    }
    int k=palindrome(&head,n);
    if(k==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;

}
