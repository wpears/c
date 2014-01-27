#include <stdio.h>

main(){
  float fahr, cel;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  printf("%4s %6s\n","Fahr","Cel");
  while (fahr <= upper){
    cel = 5.0/9.0*(fahr-32.0);
    printf("%4.0f %6.1f\n", fahr, cel);
    fahr = fahr + step;
  }
}
