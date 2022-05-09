#include<stdio.h>
int main()
{
    int num;
int sum = 0;
int count = 0;

do{
    scanf("%d",&num);
    if(num != -1)
    {sum = sum + num;
    count=count+1;
    }
} while (num != -1);
printf("%f\n",1.0*sum/count);
}
