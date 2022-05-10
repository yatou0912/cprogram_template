#include<stdio.h>
int main()
{
    int 一毛,两毛,五毛;
    int x=2;
    int exit=0;
    for (一毛= 0; 一毛< 20; 一毛++)

         {for(两毛 = 0; 两毛 <10; 两毛++)
            {for (五毛 = 0; 五毛 < 4; 五毛++)
                if (一毛*1+两毛*2+五毛*5==20)

                {
                    printf("%d一毛 %d两毛 %d五毛\n",一毛,两毛,五毛);
                    exit=1;
                    break;
                }
             if (exit)
             break;}
        if(exit);
        break;
        }
}
