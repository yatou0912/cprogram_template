#include<stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    printf("please input former time\n");
    scanf("%d%d",&hour1,&minute1);
    
    printf("please input current time\n");
    scanf("%d%d",&hour2,&minute2);
    int t=hour2*60+minute2-hour1*60-minute1;
    printf("difference time is %dhours%dminutes",t/60,t%60);
    return 0;

}
