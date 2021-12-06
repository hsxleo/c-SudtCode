#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int num;
    struct link *next;
}linklist;

//构建链表
void CreateList(linklist *head)
{
    linklist *p=head->next;
    linklist *q=NULL;
    for(int i=0;i<head->num;i++)
    {
        p = (linklist*)malloc(sizeof(linklist));
        p ->next =NULL;
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
}

//链表排序
void LinkSort(linklist *head)
{
    linklist *p=head->next;
    linklist *q=NULL;
    int temp;
    for(int i=1;i<head->num;i++)
    {
        q=head->next;
        for(int j=0;j<head->num-i;j++)
        {
            if(q->num > q->next->num)
            {
                temp=q->num;
                q->num=q->next->num;
                q->next->num=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
}

//打印链表
void PrintLink(linklist *head)
{
    linklist *p=head->next;
    while(p->next!=NULL)
    {
        printf("%d ",p->num);
        p=p->next;
    }
    printf("%d\n",p->num);
}

int main()
{
    //头结点
    linklist *head=NULL;
    head = (linklist *)malloc(sizeof(linklist));
    head->next=NULL;
    scanf("%d",&head->num);

    //构建链表
    CreateList(head);

    //链表排序
    LinkSort(head);

    //打印链表
    PrintLink(head);

    return 0;
}
