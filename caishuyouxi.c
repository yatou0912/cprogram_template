#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a=rand()%100+1;
    int count=0;
    int num;
    printf("there is a num from 1 to 100,please guess it,and please input a num\n");
    do
    {scanf("%d",&num);
    count++;
    if (num>a)
    {printf("your guess is big\n");
    }
    if (num<a)
    {printf("your  guess is small\n");
    }} while (num !=a);
    printf("you guess it,your guess counts is %d",count);
    
}
