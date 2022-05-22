#include<stdint-gcc.h>
#include<string.h>
int main()
{
    char *s="hello world";
    char *s2="HELLO WORLD";
    char *s3="hello world";
    printf ("%p\n",s);
    printf("%p\n",s2);
    printf("%p\n",s3);
    char line[10];
    scanf("%s",line);
    printf("%d\n",strlen(line));
