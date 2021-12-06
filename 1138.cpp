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
            q->next = p;
            q = p;
        }
    }
}

//��ӡ����
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

//ɾ������Ԫ��
void DeleteLink(linklist *head,int n)
{
    linklist *p=head;
    while(p->next!=NULL)
    {
        if(p->next->num == n)
        {
            p->next = p->next->next;
            head->num --;
        }
        else
        {
            p=p->next;
        }
    }
}
int main()
{
    //ͷ���
    linklist *head;
    head = (linklist*)malloc(sizeof(linklist));
    head->next = NULL;
    scanf("%d",&head->num);

    //��������
    CreateLink(head);
    int n;          //Ҫɾ����Ԫ��
    scanf("%d",&n);

    //ԭ����
    PrintLink(head);

    //ɾ��Ԫ��
    DeleteLink(head,n);

    //������
    PrintLink(head);

    return 0;
}
