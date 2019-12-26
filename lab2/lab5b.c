#include <stdio.h>
#include <ctype.h>
int getch(void);
void ungetch(int);
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp=0;
int getch(void)
{
    return (bufp>0)? buf[--bufp]:getchar();
}
void ungetch(int c)
{
    if (bufp>=BUFSIZE)
       printf("ungetch:too many characters\n");
    else
    {
         buf[bufp++]=c ;
    }
    
}

int getfloat(float *pn)
{
    int c,sign;
    float power;
    while(isspace(c=getch()));
    if(!isdigit(c)&&c!='.'&&c!='+'&&c!=EOF&&c!='-')
    {
        ungetch(c);
        return 0;
    }
    sign=(c=='-')?-1:1;
    if(c=='+'||c=='-')
    c=getch();
    for(*pn=0.0;isdigit(c);c=getch())
    *pn=10.0* *pn+(c-'0');
    if(c=='.')
    c=getch();
    for(power=0.0;isdigit(c);c=getch())
    *pn=10.0* *pn+(c-'0');
    power *=10.0;
    *pn *=sign/power;
    if(c!=EOF)
    ungetch(c);
    return c;
}
int main()

