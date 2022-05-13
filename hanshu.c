#include<stdio.h>
void print()

{
    printf("hello world\n");
}
void sum(int begin,int end){
    
    int i;
    int sum=0;
    for ( i = begin; i <= end; i++)
    {
        sum=sum+i;
         }
    printf("sum is %d\n",sum);
    
}
int  main()
{
    print();
    sum(1,10);
}

