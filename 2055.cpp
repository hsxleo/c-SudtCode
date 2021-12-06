/*****************************************************************
组号：13组
题目：2055（去淄博旅游）
时间：2019.01.31
******************************************************************
解题思路：
用一个新的字符串数组记住form（to）中的按输入顺序排列的不重复城市
（通过循环判断并记入一个新字符串）
然后先输出form（to）头部，然后通过判断一个一个输出

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
    //在新的字符串数组str1记住from中的按输入顺序排列的不重复城市
    for(i=0;i<n;i++)
    {
        cin >> s[i].name >> s[i].from >> s[i].to ;
        for(j=0;j<m;j++)
        {
            if(s[i].from==s[j].from)
                break;
        }
        if(j==m)  //循环里的if语句没有执行的时候
            str1[m++]=s[i].from;
    }
    //输出form部分内容
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
    //输出to部分内容
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

