#include<stdio.h>
int main()
{
    double inch;
    double foot;
    printf("please input you inch\n");
    scanf("%lf%lf",&foot,&inch);
    printf("your height is%f meter",(foot+inch/12)*0.3048);
    return 0;
}
