#include<stdio.h>
int main()
{
    int x;
    int i;
    int a=1;
    scanf("%d",&i);
    for (x  = 2; x <i; x++)
    {
    if (i%x==0)
        {
             a=0;
            break ;
        }
    }
    if (a==1)
        {printf("this is prime");
    }
    if(a==0)
    {
        printf("this is Composite");
    }
    }
    
