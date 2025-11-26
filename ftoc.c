#include <stdio.h>

/* print fahrenheit-celcious table
    for fahr = 0, 20, ..., 300 */

main()
{

  int fahr;

  printf("Ascending Temps\n");

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));

  printf("Descending Temps\n");

  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}

