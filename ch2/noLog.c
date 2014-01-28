int main(){
  for (i=0; i < 10; ++i)
    if((c=getchar())!= '\n')
      if(c != EOF)
        printf("%d\n",i );
}