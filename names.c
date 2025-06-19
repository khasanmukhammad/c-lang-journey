#include <stdio.h>
#include <string.h>

int main() {
  int choice;
  char name[100];

  do{
    printf("MENYU\n");
    printf("1.Add names \n");
    printf("2.Search name \n");
    printf("3.All names \n");
    printf("0.end program \n");
    printf("choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
      printf("Add name: ");
      scanf("%s", name);
      FILE *fptr;
      fptr = fopen("names.txt", "a");
      fprintf(fptr,"%s \n", name);
      fclose(fptr);
    }
  
    else if(choice == 2) {
      printf("Search name: ");
      scanf("%s", name);
      FILE *fptr;
      fptr = fopen("names.txt", "r");
      char name[100];
      int found = 1;
      while(fscanf(fptr, "%s", name)!= EOF) {
        if(strcmp(name, name) == 0) {
          found = 0;
          break;
        }
      }
      fclose(fptr);
      printf(found? "Found\n" : "Not found\n");
    }
    
    else if(choice == 3){
      printf("All name: ");
      FILE *fptr;
      fptr = fopen("names.txt", "r");
      char name[100];
      printf("names \n");
      while(fscanf(fptr, "%s", name)!= EOF)
      printf("%s\n", name);
      fclose(fptr);

    }
      
  }while(choice != 0);
    return 0;
}
