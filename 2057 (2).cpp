#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _link
{
    char name[20];
    int score;
    struct _link *next;
}link;

link * input(link *head);
void display(link *head);
void f_A(link *head);
void f_Q(link *head);
void f_C(link *head);
void f_S(link *head);
int main()
{
    link *head=NULL;
    link *p=NULL;
    char ch;
    head=input(head);
    getchar();
    scanf("%c",&ch);
    while(1)
    {
        if(ch=='O')
            break;
        switch(ch)
        {
            case 'A':
                f_A(head);
                break;
            case 'Q':
                f_Q(head);
                break;
            case 'C':
                f_C(head);
                break;
            case 'S':
                f_S(head);
                break;
        }
        getchar();
        scanf("%c",&ch);
    }
    display(head);

    return 0;
}

link * input(link *head)
{
    link *p=NULL,*q=NULL;
    int i;
    head=(link *)malloc(sizeof(link));
    head->next=NULL;
    scanf("%d",&head->score);
    for(i=0;i<head->score;i++)
    {
        p=(link *)malloc(sizeof(link));
        p->next=NULL;
        scanf("%s %d",p->name,&p->score);
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
    return head;
}

void display(link *head)
{
    link *p=NULL;
    int i;
    p=head;
    for(i=0;i<head->score;i++)
    {
        p=p->next;
        printf("%s %d\n",p->name,p->score);
    }
}

void f_A(link *head)
{
    head->score++;
    link *p=NULL,*q=NULL;
    p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    q=(link *)malloc(sizeof(link));
    q->next=NULL;
    scanf("%s%d",q->name,&q->score);
    p->next=q;
}
void f_Q(link *head)
{
    head->score--;
    link *p=NULL,*q=NULL;
    char name[20];
    p=head->next;
    q=head;
    scanf("%s",name);
    while(strcmp(name,p->name)!=0)
    {
        p=p->next;
        q=q->next;
    }
    q->next=p->next;
}
void f_C(link *head)
{
    link *p=NULL;
    char name[20];
    int n;
    scanf("%s %d",name,&n);
    p=head->next;
    while(strcmp(name,p->name)!=0)
    {
        p=p->next;
    }
    p->score+=n;
}
void f_S(link *head)
{
    link *p=NULL,*q=NULL,*k=NULL,*t=NULL;
    link temp;
    int i,j;
    p=head;
    for(i=0;i<head->score-1;i++)
    {
        p=p->next;
        q=p;
        for(j=0;j<head->score-i-1;j++)
        {
            k=q->next;
            if(q->score < k->score)
            {
                temp=*k;
                *k=*q;
                *q=temp;
                t=q->next;
                q->next=k->next;
                k->next=t;
            }
            q=q->next;
        }
    }
}
