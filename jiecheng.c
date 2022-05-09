#include<stdio.h>
int main()
{int n;
int m=1;
int fac=1;
    scanf("%d",&n);
    while (m<=n)
    {fac=fac*m;
    m=m+1;
        /* code */
    }
    printf("%d",fac);
}