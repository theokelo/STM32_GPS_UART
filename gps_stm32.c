#include <stdio.h>
#include <string.h>

int main(void)
{
  char *token;
  char *s1 = "$GPRMC,160301.00,A,0105.79958,S,03700.63126,E,0.222,,050222,,,A*67\r\n$GPVTG,,T,,M,0.222,N,0.411,K,A*25\r\n$GPGGA,160301.00,0105.79958,S,03700.63126,E,1,07,1.22,1538.1,M,-22.0,M,,*5B\r\n$GPGSA,A,3,12,05,25,18,15,24,23,,,,,,3.02,1.22,2.77*0B\r\n$GPGSV,2,1,08,02,04,030,,05,36,079,21,12,45,052,33,15,20,151,28*76\r\n$GPGSV,2,2,08,18,55,251,34,23,24,197,26,24,49,174,31,25,36,001,22*7D\r\n$GPGLL,0105.79958,S,03700.63126,E,160301.00,A,A*7B";
  char *copy = strdup(s1);
  while( (token = strsep(&copy,"\n")) != NULL )
    printf("%s\n",token);

  return 0;
}
