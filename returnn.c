#include<stdio.h>
int ret;
int max(int a,int b){
    
    if (a>b)
    {ret=a;
        /* code */
    }
    else{ret=b;}
    return ret;
    }
int main()
{
    max(1,2);
    printf("%d",ret);
}
