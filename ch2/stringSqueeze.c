void stringSqueeze (char str[] char del[]){
  int i, j, gap=0;
  for (i=0; str[i] != '\0'; i++){
    for (j=0; del[j] != '\0';j++){
      if(str[i] == del[j]) break;
    }
    if(del[j]=='\0') gap++;
  }
}