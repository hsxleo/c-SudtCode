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
            head ->next = p;
            p ->next = q;
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

//ɾ�������ظ�Ԫ��
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
    //ͷ���
    linklist *head;
    head = (linklist*)malloc(sizeof(linklist));
    head->next = NULL;
    scanf("%d",&head->num);

    //��������
    CreateLink(head);

    //ԭ����
    PrintLink(head);

    //ɾ��Ԫ��
    DeleteLink(head);

    //������
    PrintLink(head);

    return 0;
}
