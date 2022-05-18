#include<stdio.h>
int search(int key,int a[],int length)
{
    int left=0;
    int ret=-1;
    int right=length-1;
    while (left<right)
    {
        int mid=(left+right)/2;
        if (a[mid]=key)
            {
                ret=mid;
            }else if (a[mid]>key)
                {
                    right=mid-1;
               }else{
                   left=mid+1;
                    }
        return ret;
    }
    
}
int main()
{
    printf("this is erfenfa");
}
