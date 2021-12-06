#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int num;
    struct link *next;
}linklist;


//构建循环链表
linklist *CreateLink(linklist *head,int n)
{
    linklist *p=NULL,*q=NULL;
    for(int i=0;i<n;i++)
    {
        p=(linklist*)malloc(sizeof(linklist));
        p->next =NULL;
        p->num = i+1;
        if(head==NULL)
        {
            head = p;
            q = p;
        }
        else
        {
            q->next = p;
            q = p;
        }
    }
    p->next=head;
    return head;
}

//计算排长第几次去并输出
linklist* ComputePrint(linklist *head)
{
    linklist *p=NULL;
    linklist *temp=NULL;
    int count=0;
    p=head;
    while(1)
    {
        //到删除结点的前一个结点
        int i=3;
        while(i--)
        {
            p=p->next;
        }

        count++;    //删除结点的个数

        //判断是否为第一个结点
        if(p->next->num==1)
        {
            break;
        }
        temp=p->next;   //要删除的结点

        //保证head存在
        if(temp==head)
        {
            head = temp->next;
        }

        //删除并释放该结点
        p->next=p->next->next;
        free(temp);

        p=p->next;
    }
    printf("%d\n",count);
    return head;
}

//释放链表
void FreeLink(linklist *head)
{
    linklist *p=head->next;
    linklist *q=NULL;
    while(p!=head)
    {
        q=p;
        p=p->next;
        free(q);
    }
    free(head);

}
int main()
{
    //头指针
    linklist *head=NULL;

    int n;  //总人数
    while(scanf("%d",&n)!=EOF&&n)
    {
        //构建循环链表
        head=NULL;
        head=CreateLink(head,n);

        //计算排长第几次去并输出
        if(n!=0)
        {
            head=ComputePrint(head);
        }
        //释放空间
        FreeLink(head);
    }
}
