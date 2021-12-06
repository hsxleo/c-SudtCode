#include <stdio.h>
#include <stdlib.h>

struct data
{
    int num;
    struct data *next;
}data;
struct data * input(struct data *head,int n);
int main()
{
    struct data *head1=NULL,*head2=NULL;
    struct data *p=NULL;
    int m,n;
    int i,j;
    int t;
    scanf("%d%d",&n,&m);
    head1=input(head1,n);
    head2=input(head2,m);

    p=head1;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=head2;

    for(i=0;i<n+m-1;i++)
    {
        p=head1;
        for(j=0;j<n+m-i-1;j++)
        {
            if(p->num > p->next->num)
            {
                t=p->num;
                p->num=p->next->num;
                p->next->num=t;
            }
            p=p->next;
        }
    }

    p=head1;
    for(i=0;i<n+m;i++)
    {
        if(i==m+n-1)
        {
            printf("%d\n",p->num);
        }
        else
        {
            printf("%d ",p->num);
        }
        p=p->next;
    }
    return 0;
}


struct data * input(struct data *head,int n)
{
    int i;
    struct data *p=NULL,*q=NULL;
    for(i=0;i<n;i++)
    {
        p=(struct data *)malloc(sizeof(struct data));
        scanf("%d",&p->num);
        p->next=NULL;
        if(head==NULL)
        {
            head=p;
            q=p;
        }
        else
        {
            q->next=p;
            q=p;
        }
    }
    return head;
}
