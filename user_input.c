#include <stdio.h>

int main() {
  //create a string 
  char fullName[30];
  
  //ask the user tp input some text (fullname)
  printf("Type your full name and press enter: \n");
  
  //Get the text
  fgets(fullName, sizeof(fullName), stdin);
  
  //output the text 
  printf("Hello %s", fullName);
  
  return 0;
}   