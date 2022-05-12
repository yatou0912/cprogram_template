#include<stdio.h>
int main()
{
    int a;
    int b;
    int cnt=0;
    int sum=0;
    int num[100];

    scanf("%d",&b);
    do
    {
        sum=sum+b;
        cnt=cnt+1;
        num[cnt]=b;
        scanf("%d",&b);
     } while (b!=-1);
     if (cnt>0)
     {int i;
     double ave=sum/cnt;
     for (i= 0; i < cnt; i++)
         {
        if (num[i]>ave)
        {
            printf("%d\n",num[i]);
        }
            }
      }
         printf("%f\n",1.0*sum/cnt);
    //printf("%d\n",cnt);
    //printf("%d",num[cnt]);
}
