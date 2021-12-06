#include <stdio.h>
#include <stdlib.h>

typedef struct _link
{
    int num;
    struct _link *next;
}link;
link * input(link *head);
void display(link *head);

int main()
{
    link *p=NULL,*q=NULL,*k=NULL;
    link *head=NULL;
    int i,j;
    int count;

    head=input(head);
    display(head);

    p=head;
    count=head->num;
    for(i=0;i<count;i++)
    {
        p=p->next;
        q=p;
        for(j=i+1;j<count;j++)
        {
           k=q->next;
           if(p->num==k->num)
           {
               q->next=k->next;
               count--;
               j--;
           }
           else
           {
               q=q->next;
           }
        }
    }

    head->num=count;
    display(head);
    return 0;
}

link * input(link *head)
{
    link *p=NULL,*q=NULL;
    int i;
    head=(link *)malloc(sizeof(link));
    scanf("%d",&head->num);
    head->next=NULL;
    for(i=0;i<head->num;i++)
    {
        p=(link *)malloc(sizeof(link));
        scanf("%d",&p->num);
        p->next=NULL;
        if(head->next==NULL)
        {
            head->next=p;
            p->next=head;
            q=p;
        }
        else
        {
            p->next=q;
            head->next=p;
            q=p;
        }
    }
    return head;
}

void display(link *head)
{
    int i;
    link *p=NULL;
    printf("%d\n",head->num);
    p=head;
    for(i=0;i<head->num;i++)
    {
        p=p->next;
        if(i==head->num-1)
            printf("%d\n",p->num);
        else
            printf("%d ",p->num);
    }
}
