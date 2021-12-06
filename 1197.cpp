#include <stdio.h>
#include <stdlib.h>

typedef struct _link
{
    int num;
    struct _link *next;
    struct _link *next2;
}link;

int main()
{
    int n,m;
    int i;
    int t;
    link *head=NULL;
    link *p=NULL,*q=NULL;
    scanf("%d%d",&n,&m);
    head=(link *)malloc(sizeof(link *));
    head->num=1;
    head->next=NULL;
    head->next2=NULL;
    q=head;
    for(i=2;i<=n;i++)
    {
        p=(link *)malloc(sizeof(link *));
        p->num=i;
        p->next=NULL;
        p->next2=NULL;
        q->next=p;
        q->next2=p;
        q=p;
    }
    p->next=head;
    p->next2=head;
    t=n;
    p=head;
    while(--t)
    {
        for(i=1;i<m-1;i++)
        {
            p=p->next2;
        }
        p->next2->num=0;
        p->next2=p->next2->next2;
        p=p->next2;
    }
    p=head;
    for(i=0;i<n;i++)
    {
        if(p->num!=0)
        {
            printf("%d\n",p->num);
            break;
        }
        p=p->next;
    }
    return 0;
}
