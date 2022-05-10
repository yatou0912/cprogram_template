#include<stdio.h>
int main()
{int num;
int odd=0;
int even=0;
   do
   {
       scanf("%d",&num);
       if (num%2==0){
           even++;
    }
    else if (num%2==1)
    {odd++;
        /* code */
    }
   } while (num !=-1);
    printf("%d %d",even,odd);

}
