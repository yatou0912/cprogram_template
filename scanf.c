#include<stdio.h>
int main()
{
  char name[20];/* 定义字符串，指定字符组，后边是长度参数*/
  printf("please input your name\n");
  scanf("%s",&name);
  printf("your name is %s",name);
}
