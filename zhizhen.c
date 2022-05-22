#include<stdio.h>
int minmax(int a[],int len,int *min,int *max)
{
    int i;
     *min=a[0];
    *max=a[0];
    for (i = 1; i < len; i++)
    {
        if (*min>a[i])
        {
           *min=a[i];
        }
        if (*max<a[i])
        {
            *max=a[i];
        }
     
    }
 }
 int main(){
     int a[]={10,2,3,4,5,6,32,23,12,13,14,13,35,9};
     int min;
     int max;
minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
printf("min=%d,max=%d",min,max);
 }
