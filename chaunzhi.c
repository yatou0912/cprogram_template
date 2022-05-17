#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a=5;
    int b=6;
    swap(a,b);// swap只传递了a b的值 5 和6  并不是传递了a  b的值，所以此时a b的值还是5  和6 并不是交换后的b=5 a=6
    printf("a=%d,b=%d",a,b);
}
void swap (int a,int b)
{
    int t=a;
    a=b;
    b=t;
}


