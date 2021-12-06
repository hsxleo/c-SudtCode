#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int num;
    struct link *next;
}linklist;


//����ѭ������
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

//�����ų��ڼ���ȥ�����
linklist* ComputePrint(linklist *head)
{
    linklist *p=NULL;
    linklist *temp=NULL;
    int count=0;
    p=head;
    while(1)
    {
        //��ɾ������ǰһ�����
        int i=3;
        while(i--)
        {
            p=p->next;
        }

        count++;    //ɾ�����ĸ���

        //�ж��Ƿ�Ϊ��һ�����
        if(p->next->num==1)
        {
            break;
        }
        temp=p->next;   //Ҫɾ���Ľ��

        //��֤head����
        if(temp==head)
        {
            head = temp->next;
        }

        //ɾ�����ͷŸý��
        p->next=p->next->next;
        free(temp);

        p=p->next;
    }
    printf("%d\n",count);
    return head;
}

//�ͷ�����
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
    //ͷָ��
    linklist *head=NULL;

    int n;  //������
    while(scanf("%d",&n)!=EOF&&n)
    {
        //����ѭ������
        head=NULL;
        head=CreateLink(head,n);

        //�����ų��ڼ���ȥ�����
        if(n!=0)
        {
            head=ComputePrint(head);
        }
        //�ͷſռ�
        FreeLink(head);
    }
}
