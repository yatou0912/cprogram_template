#include<stdio.h>
int search(int key,int a[],int length);

int main(){
int a[]={1,2,3,4,5,6,7,8,32,21,3,45,42,25,25};
int b[12]={[2]=3,[4]=5,[8]=9};
int x;
int loc;
scanf("%d",&x);

loc=search(x,a,sizeof(a)/sizeof(a[0]));
if (loc!=-1)
{
   printf("%d在第%d个位置",x,loc);
}else
{
    printf("数字不存在");
}

}

//定义search函数，函数包含三个参量，需要查找的值key，
// 需要查找的数组a[]
//数组的长度length
int search(int key,int a[],int length)
{
int ret=-1;
int i;
for ( i = 0; i <length; i++)
{
    if (a[i]==key)
    {
        ret=i;
        break;
    }
}
}
