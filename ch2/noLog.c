#include <stdio.h>

int main(){
  int i,c;
  for (i=0; i < 10; ++i)
    if((c=getchar())!= '\n')
      if(c != EOF)
        printf("%d\n",i );
}
