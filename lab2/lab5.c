#include <stdio.h>
void reverse(char s[])
{
    char a=*s;
    if(a)
    {
        reverse(s=s+1);
    }
    printf("%c",a);
}

int main()
{
    printf("请输入字符串");
    char *s;
    scanf("%s",*&s);
    reverse(s);
    return 0;
}