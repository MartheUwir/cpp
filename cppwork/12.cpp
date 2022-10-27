#include <stdio.h>
float convertCelFahrenheit(float c)
 {
    return ((c * 9.0 / 5.0) + 32.0);
 }
 int main()
 {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = convertCelFahrenheit(celsius);
    printf("%.3f Celsius = %.3f Fahrenheit", celsius, fahrenheit);
    return 0;
 }