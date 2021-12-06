/************************************
制作人：黄士祥
制作日期：2019.10.19
制作内容：
************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
      int a,b ;     
      while(scanf("%d %d",&a,&b))   
      {
      if (a==0&&b==0) break;    
      printf("%d\n",a+b);   
      }
      system("pause");
	  return 0;
}
