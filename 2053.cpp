#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _link
{
    char name[5];
    int score;
    struct _link *next;
}link;

int main()
{
    link *p=NULL,*q=NULL;
    link *head=NULL,*thead=NULL;
    int i,j;
    int n,m;
    int t;
    char t2[5];
    scanf("%d",&n);
    head=(link *)malloc(sizeof(link));
    head->next=NULL;
    head->score=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        head->score+=m;
        for(j=0;j<m;j++)
        {
            p=(link *)malloc(sizeof(link));
            scanf("%s%d",&p->name,&p->score);
            p->next=NULL;
            if(head->next==NULL&&i==0)
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
    }
    p=head;
    for(i=0;i<head->score-1;i++)
    {
        p=p->next;
        q=p;
        for(j=0;j<head->score-i-1;j++)
        {
            q=q->next;
            if(p->score<q->score)
            {
                t=p->score;
                p->score=q->score;
                q->score=t;
                strcpy(t2,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,t2);
            }
            else if(p->score==q->score)
            {
                if(strcmp(p->name,q->name)>0)
                {
                    strcpy(t2,p->name);
                    strcpy(p->name,q->name);
                    strcpy(q->name,t2);
                }
            }
        }
    }
    p=head;
    for(i=0;i<head->score;i++)
    {
        p=p->next;
        if(i==head->score-1)
            printf("%s\n",p->name);
        else
            printf("%s ",p->name);
    }
    return 0;
}

