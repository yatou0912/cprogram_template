#include<stdio.h>
int main()
{
    int a;
    int b=0;
    printf("please input bjtime\n");
    scanf("%d",&a);
    if (a/100>=8)
    { b=a/100-8;}
    else {
     b=a/100+24-8;
    }
    printf("b=%d\n",b);
    printf("a=%d\n",a);

    printf("%d",b*100+a%100);
    return 0;
}
    

