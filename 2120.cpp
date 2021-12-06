#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int num;
    struct link *next;
}linklist;

//��������
void CreateLink(linklist *head)
{
    linklist *q=NULL,*p=NULL;
    for(int i=0;i<head->num;i++)
    {
        p=(linklist*)malloc(sizeof(linklist));
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
}

//���ֲ�������ż����
void JudgeCreate(linklist *head,linklist *evenhead,linklist *oddhead)
{
    linklist *p=head->next;
    linklist *eq=evenhead->next;
    linklist *oq=oddhead->next;
    while(p!=NULL)
    {
        if(p->num%2==0)
        {
            evenhead->num++;
            if(evenhead->next==NULL)
            {
                evenhead->next=p;
                eq=p;
            }
            else
            {
                eq->next=p;
                eq=p;
            }
        }
        else
        {
            oddhead->num++;
            if(oddhead->next==NULL)
            {
                oddhead->next=p;
                oq=p;
            }
            else
            {
                oq->next=p;
                oq=p;
            }
        }
        p=p->next;
    }
    eq->next=NULL;
    oq->next=NULL;
}

//��ӡ����
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
    linklist *head,*evenhead,*oddhead;

    //ԭ����
    head=(linklist*)malloc(sizeof(linklist));
    head->next=NULL;
    scanf("%d",&head->num);

    //ż����
    evenhead=(linklist*)malloc(sizeof(linklist));
    evenhead->next=NULL;
    evenhead->num=0;

    //������
    oddhead=(linklist*)malloc(sizeof(linklist));
    oddhead->next=NULL;
    oddhead->num=0;

    //����ԭ����
    CreateLink(head);

    //���ֲ�������ż����
    JudgeCreate(head,evenhead,oddhead);

    //��ӡ
    printf("%d %d\n",evenhead->num,oddhead->num);
    PrintLink(evenhead);
    PrintLink(oddhead);

    return 0;
}
