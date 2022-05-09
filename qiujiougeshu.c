#include<stdio.h>
int main()
{int num;
int odd=0;
int dou=0;
   do
   {
       scanf("%d",&num);
       if (num%2==0){
           dou++;
    }
    else if (num%2==1)
    {odd++;
        /* code */
    }
   } while (num !=-1);
    printf("%d %d",dou,odd);

}
