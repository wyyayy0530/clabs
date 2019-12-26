#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    double a[100];
    a[0]=10;
    a[1]=202;
    a[2]=899;
    int m=0;
    int n=0;
    for(m=1;m<argc;m++,n++)
    {
        a[n]=atof(argv[m]);
    }
    int i;
    double min=a[1];
    for (i=0;i<argc-1;i++)
    {
        if(a[i]<min){
        min=a[i];
        }
    }
    printf("%f",min);
}