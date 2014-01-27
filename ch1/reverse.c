#include <stdio.h>
#include <string.h>

char* reverse (char s[]);

int main(){
  char str[25];
  int c, i=0;
  while((c=getchar()) != EOF){
    str[i]=c;
    i++;
  }
  printf("Reversed: %s",reverse(str));
}

char* reverse (char s[]){
  int len, i, last, half;
  char temp;
  len = strlen(s);
  last = len-1;
  half = len/2;
  for(i = 0; i <half; i++){
    temp=s[i];
    s[i]=s[last-i];
    s[last-i]=temp;
  }
  return s;
  
}
