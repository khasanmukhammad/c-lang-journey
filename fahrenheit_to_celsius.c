#include <stdio.h>

float toCelsius(float fahrenheit) {
   return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
   float f_value;

   printf("Enter F value");
   scanf("%f", &f_value);

   float result = toCelsius(f_value);

   printf("Converent Fahrenheit to Celsius: %.2f\n", result);
   return 0;
}   
   

