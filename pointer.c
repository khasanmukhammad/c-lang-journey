#include <stdio.h>
 
int main() {
  int myAge = 16; //variable declaration 
  int* ptr = &myAge; //pointer declaration
  
  //refence:output the memory address of myAge with the pointer (0xtffe46713954)
  printf("%p\n", ptr);
  
  //derefence: output the value of myAge with thr pointer (16) 
  printf("%d\n", *ptr);
  
  return 0;
}                             
