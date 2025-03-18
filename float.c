#include<stdio.h>
#include<stdlib.h>

int main()
{
  /* 1.23456789 */
  double decimaldigits = 1.23456789;

double worldpopulation = 7.801e9;

/* 6.673 x 10 ^ -34*/
double plankconstant = 6.673e-34;

printf("%12.1f | 1 decimal digit\n",dicimaldigits);
printf("%12.1f | 1 decimal digit\n",dicimaldigits);
printf("%12.1f | worldpopulation, decimal, 1 digit of precision\n",worldpopulation);
printf("%12.1e | worldpopulation, scientific, 1 digit of precision\n",worldpopulation);
printf("%12.3e | worldpopulation, scientific, 3 digit of precision\n",worldpopulation);
printf("%12.1e | plankconstant, scientific, 1 digit of precision\n",plankconstant);
printf("%12.3e | plankconstant, scientific, 3 digit of precision\n",plankconstant);

return Exit_success;
}
