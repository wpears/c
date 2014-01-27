#include <stdio.h>

float toCel (float fahr);

main(){
  float fahr, cel;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  printf("%4s %6s\n","Fahr","Cel");
  while (fahr <= upper){
    printf("%4.0f %6.1f\n", fahr, toCel(fahr));
    fahr = fahr + step;
  }
}

float toCel (float fahr){
  return 5.0/9.0*(fahr-32.0)
}
