#include<stdio.h>
//辗转相除的思想可以用以下来思考，当两个数字有最大公约数时候，那么和他们的差也有相同的最大
//的最大公约数，那么就变成了求这个差其中小值的最大公约数，以此类推，直到差为其中一个数
//的约数为止
int main()
{
    int a,b;
    int c;
    scanf("%d %d",&a,&b);
    while ( b!=0)
    {c=a%b;
    a=b;
    b=c;
    }
    printf("%d\n",a);
    return  0;
}
