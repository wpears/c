#include <stdio.h>

main(){
  float fahr, cel;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 10;
  fahr = lower;

  printf("%4s %6s\n","Cel", "Fahr");
  while (cel <= upper){
    fahr = 9.0/5.0*cel+32.0;
    printf("%4.0f %6.1f\n", cel, fahr);
    cel= cel + step;
  }
}
