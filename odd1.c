#include<stdio.h>
int main()
{
    int i=2;
    int cnt=0;

      while (cnt<100)
        {
        int x;
        int a=1;
        for (x  = 2; x <i; x++)
            {
            if (i%x==0)
            {
                a=0;
                break ;
            }
        }
        if (a==1)
            {printf("%d ",i);
            cnt++;
        }
        ++i;
    }
    }
    
