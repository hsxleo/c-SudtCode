/*****************************************************************
��ţ�13��
��Ŀ��2055��ȥ�Ͳ����Σ�
ʱ�䣺2019.01.31
******************************************************************
����˼·��
��һ���µ��ַ��������סform��to���еİ�����˳�����еĲ��ظ�����
��ͨ��ѭ���жϲ�����һ�����ַ�����
Ȼ�������form��to��ͷ����Ȼ��ͨ���ж�һ��һ�����

*****************************************************************/
#include <iostream>
using namespace std;

struct tourist
{
    string name;
    string from;
    string to;
}s[100];

int main()
{
    int n,m=0;
    int i,j;
    string str1[100];
    string str2[4]={"zichuan","linzi","zhoucun","boshan"};
    cin >> n;
    //���µ��ַ�������str1��סfrom�еİ�����˳�����еĲ��ظ�����
    for(i=0;i<n;i++)
    {
        cin >> s[i].name >> s[i].from >> s[i].to ;
        for(j=0;j<m;j++)
        {
            if(s[i].from==s[j].from)
                break;
        }
        if(j==m)  //ѭ�����if���û��ִ�е�ʱ��
            str1[m++]=s[i].from;
    }
    //���form��������
    for(i=0;i<m;i++)
    {
        cout << str1[i] << " :" ;
        for(j=0;j<n;j++)
        {
            if(s[j].from==str1[i])
            {
                cout << " " << s[j].name ;
            }
        }
        cout << endl;
    }
    //���to��������
    for(i=0;i<4;i++)
    {
        cout << str2[i] << " :" ;
        for(j=0;j<n;j++)
        {
            if(s[j].to==str2[i])
            {
                cout << " " << s[j].name ;
            }
        }
        cout << endl;
    }
    return 0;
}

