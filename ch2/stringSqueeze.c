#include <stdio.h>
void stringSqueeze (char a[], char b[]);

int main(){
  char wy[] = "Wyatt";
  char d[] = "yt";
  int i;
  stringSqueeze(wy,d);
  for(i=0;wy[i]!='\0';i++)
    putchar(wy[i]);
}

void stringSqueeze (char str[], char del[]){
  int i, j, gap=0;
  for (i=0; str[i] != '\0'; i++){
    for (j=0; del[j] != '\0';j++){
      putchar(str[i]);
      putchar(' ');
      putchar(del[j]);
      putchar('\n');
      if(str[i] == del[j]) break;
    }
    if(del[j]=='\0'){
      str[gap++]=str[i];
    }
  }
  str[gap]='\0';
}
