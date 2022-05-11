#include<stdio.h>
int main ()
{int x;
int mask=1;
scanf("%d",&x);
int t=x;
while(t>9){
t=t/10;
mask=mask*10;
//printf("%d  %d\n",t,mask);
} 
do{
int d=x/mask;
printf("%d",d);
if (mask>9)
{printf(" ");}
x=x%mask;
mask=mask/10;} while (mask>0);
printf("\n");
}
