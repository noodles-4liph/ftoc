#include <stdio.h>

/* print fahrenheit-celcious table
    for fahr = 0, 20, ..., 300 */

main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0; // lower limit of temp scale
  upper = 300; // upper limit of temp scale
  step = 20; // step size

  fahr = lower;
  
  
printf("Fahrenheit to Celcious Table\n"); //header for f to c

while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.2f\n", fahr, celsius);
    fahr = fahr + step;
  }  

printf("Celsius to Fahrenheit Table\n"); //head for c to f

while(fahr >= lower) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.2f %6.0f\n", celsius, fahr);
    fahr -= step;
}


}

