#include <stdio.h>
float fahrenheit(float celsius);
float kelvin(float celsius);
int main()
{
    float celsius;
    scanf("%f",&celsius);
    printf("temperature in Fahrenheit %f \n", fahrenheit(celsius));
    printf("temperature in Kelvin %f", kelvin(celsius));
    return 0;
}
float fahrenheit(float celsius)
{
  float fh = (float) ((celsius * 1.8)+ 32);
  return fh;
}
float kelvin(float celsius)
{
  float ke = (float) (celsius + 273.15);
  return ke;
}
