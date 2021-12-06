#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int num;
    struct link *next;
}listlink;

int main()
{
    listlink *head=NULL,*p=NULL,*q=NULL;
    head = (listlink*)malloc(sizeof(listlink));
    head->next=NULL;
    scanf("%d",&head->num);
    int i,j;
    for(i=0;i<head->num;i++)
    {
        p=(listlink*)malloc(sizeof(listlink));
        p->next=NULL;
        scanf("%d",&p->num);
        if(head->next==NULL)
        {
            head->next=p;
            q=p;
        }
        else
        {
            q->next=p;
            q=p;
        }
    }
    p=head->next;
    for(i=0;i<head->num-1;i++)
    {
        q=p;
        for(j=i+1;j<head->num;j++)
        {
            if(p->num==q->next->num)
            {
                q->next=q->next->next;
                head->num--;
                j--;
            }
            else
            {
                q=q->next;
            }
        }
        p=p->next;
    }
    printf("%d\n",head->num);
    p=head->next;
    for(i=0;i<head->num;i++)
    {
        if(i==head->num-1)
        {
            printf("%d\n",p->num);
        }
        else
        {
            printf("%d ",p->num);
        }
        p=p->next;
    }
}
