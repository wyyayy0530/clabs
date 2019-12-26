#include <stdio.h>
int str(char s[],char t[])
{
    int i,j,k;
    int x=-1;
    for(i=0;s[i]!='\0';i++){
        for(j=i,k=0;t[k]!='\0'&&s[j]==t[k];j++,k++);
        if(k>0&&t[k]=='\0')
        x=i;
    }
    return x;
}
int main()
{
    char s[50];
    int i=0;
    s[i]=getchar();
    while(s[i]!='\n'){
        i++;
        s[i]=getchar();
    }
    s[i] = '\0';
    char t[50];
    int p=0;
    t[p]=getchar();
    while(t[p]!='\n'){
        p++;
        t[p]=getchar();
    }
    t[p]='\0';
    printf("%d",str(s,t));
}