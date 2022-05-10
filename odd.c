#include<stdio.h>
int main()
{
    int i;
      for (i=2;i<100;i++){
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
        }
        
    }
    }
    
