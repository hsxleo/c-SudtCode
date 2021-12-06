#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int num;
    struct link *next;
}linklist;

//创建链表
void CreateLink(linklist *head)
{
    linklist *p=NULL,*q=NULL;
    for(int i=0;i<head->num;i++)
    {
        p = (linklist*)malloc(sizeof(linklist));
        p->next=NULL;
        scanf("%d",&p->num);
        if(head->next==NULL)
        {
            head->next = p;
            q = p;
        }
        else
        {
            head ->next = p;
            p ->next = q;
            q = p;
        }
    }
}

//打印链表
void PrintLink(linklist *head)
{
    printf("%d\n",head->num);
    linklist *p=head->next;
    while(p->next!=NULL)
    {
        printf("%d ",p->num);
        p=p->next;
    }
    printf("%d\n",p->num);
}

//删除链表重复元素
void DeleteLink(linklist *head)
{
    int flag;
    linklist *p=head,*q=NULL;
    while(p->next!=NULL)
    {
        flag = 0;
        q = head->next;
        while(q!=p->next)
        {
            if(p->next->num==q->num)
            {
                p->next = p->next->next;
                head ->num --;
                flag = 1;
                break;
            }
            q=q->next;
        }
        if(flag==0)
        {
            p=p->next;
        }
    }
}
int main()
{
    //头结点
    linklist *head;
    head = (linklist*)malloc(sizeof(linklist));
    head->next = NULL;
    scanf("%d",&head->num);

    //创建链表
    CreateLink(head);

    //原链表
    PrintLink(head);

    //删除元素
    DeleteLink(head);

    //现链表
    PrintLink(head);

    return 0;
}
