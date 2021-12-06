#include <stdio.h>
#include <stdlib.h>

typedef struct _link
{
    int num;
    struct _link *last;
    struct _link *next;
}link;

int main()
{
   int m,a[10000];
   int i,j;
   link *head=NULL;
   link *p=NULL,*q=NULL;
   head=(link *)malloc(sizeof(link));
   head->next=NULL;
   head->last=NULL;
   scanf("%d%d",&head->num,&m);
   for(i=0;i<head->num;i++)
   {
       p=(link *)malloc(sizeof(link));
       p->last=NULL;
       p->next=NULL;
       scanf("%d",&p->num);
       if(i==0)
       {
           head->next=p;
           p->last=head;
           q=p;
       }
       else
       {
           p->last=q;
           q->next=p;
           q=p;
       }
   }
   for(i=0;i<m;i++)
       scanf("%d",&a[i]);
   for(i=0;i<m;i++)
   {
       p=head;
       for(j=0;j<head->num;j++)
       {
           p=p->next;
           if(a[i]==p->num)
           {
               if(p->last!=head&&p->next!=NULL)
               {
                   printf("%d %d\n",p->last->num,p->next->num);
               }
               else if(p->last!=head&&p->next==NULL)
               {
                   printf("%d\n",p->last->num);
               }
               else if(p->last==head&&p->next!=NULL)
               {
                   printf("%d\n",p->next->num);
               }
           }
       }
   }
   return 0;
}
