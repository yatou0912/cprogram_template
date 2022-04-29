#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("please input two num\n");
    scanf("%d,%d",&a,&b);/*  此处输入的时候需注意 ，不能忽略逗号，比如输入两个数字 1  2，则这样输入1,2  */
    c=a+b;
    printf("%d+%d=%d",a,b,c);

}
