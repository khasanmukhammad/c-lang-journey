#include <stdio.h> //application for the championship
int main() {
  int myAge = 20;
  int receiveAge = 18;
  char myGender[] = "Male";
  char receiveGender[] = "Male";
  
  if (myAge >= receiveAge) {
    printf("Old enough to receive!\n");
  } else { 
    printf("Not old enough to receive\n!");
  } 
  if (strcmp(myGender, receiveGender) == 0) {
    printf("Suitable gender for receive!");
  } else {
    printf("Not suitable gender for receive!");
  }
  
  return 0;
}  