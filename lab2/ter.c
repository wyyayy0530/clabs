#include <stdio.h>
int txz(char s[]){
    int i;
    int number1=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='A'){
            number1++;
        }
    }
    return number1;
}
 int nxy (char t[]){
     int i;
     int number2=0;
     for (i=0;t[i]!='\0';i++){
         if(t[i]=='0'){
             number2++;
         }
     }
     return number2;
 }
  int main(){
      printf("输入一段总长度不超过50个字符的任意字母数字，空格符，制表符");
      char c[50];
      int i=0;
      c[i]=getchar();
      while(c[i]!='\n'){
          i++;
          c[i]=getchar();
      }
      printf("the number of a is %d and the number of 0 is %d\n",txz(c),nxy(c));
  }