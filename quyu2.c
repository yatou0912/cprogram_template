#include<stdio.h>
int main()
{
    int hour1,minute1,hour2,minute2;
scanf("%d %d",&hour1,&minute1);
int t1=hour1*60+minute1;
fflush(stdin);
scanf("%d %d",&hour2,&minute2);
int t2=hour2*60+minute2;
printf("%d,%d,%d,%d\n",hour1,minute1,hour2,minute2);
printf("time difference is %d hour %d minute",(t2-t1)/60,(t2-t1)%60);
return 0;
}
