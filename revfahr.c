#include <stdio.h>

main(){
  int fahr

  for(fahr = 300; fahr >= 0; fahr+=20)
    printf("%4.0f %6.1f\n", fahr, 5.0/9.0*(fahr-32.0));
}
