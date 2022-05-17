#include<stdio.h>
int main(){


int a[]={1,2,3,4,5,6,7,8,32,21,3,45,42,25,25};
int b[12]={[2]=3,[4]=5,[8]=9};
int i;
for ( i = 0; i < 12; i++)
{
    printf("%d  ",b[i]);
}
}
