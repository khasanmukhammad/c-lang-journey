#include <stdio.h>

int main() {
  //create variables of phones data types
  char model[] = "Apple";
  int phones = 30;
  double cost_per_phone = 200.50;
  float total_cost = phones * cost_per_phone;
  char currency = '$';
  
  //print variables
  printf("Model of phones: %s\n",model);
  printf("Number of phones: %d\n",phones);
  printf("Cost per phone: %.2f %c\n",cost_per_phone, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);
  
  return 0;
  }