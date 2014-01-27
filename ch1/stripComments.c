#include <stdio.h>

int main(){
  int c, next
  int inComment = 0
  while ((c=getchar())!=EOF){
    if(inComment){
      if(c == "*"){
        next = getchar();
        if (next == "/"){
          inComment = 0
        }
      }
    }else{
      if (c == "/"){
        next = getchar();
        if (next == "*"){
          inComment = 1
        }else{
          putchar(c)
          putchar(next)
        }
      }else{
        putchar(c)
      }
    }
  }