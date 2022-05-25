#include<stdio.h>
#include<string.h>
int main(int argc,char const *argv[])
{
    char s1[]="adc";
    char s2[]="abc";
    printf("%d\n",strcmp(s1,s2));//不同编译器的返回值是不一样的，在linux里  返回值就是差值，但是也只是比较一位就停止，所以只要值不同就可以
                                    //比较，不同太在意具体值
    //printf("%s",strcmp(s1,s2));
}
