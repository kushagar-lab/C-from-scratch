#include <stdio.h>
#include <stdlib.h>
int main(){
int age = 18;
char hasId;
  printf("enter your age = ");
  scanf("%d",&age);
 
  printf("do you have Id: (yes/no):");
  scanf(" %c",&hasId);
 
  if (age >= 18 && hasId == 'y'){
  printf("entry allowed\n"); 
    }  
  else if (age < 18 && hasId == 'y'){
   printf("entry denied: Too young\n");
     } 
  else if (age >= 18 && hasId == 'n' ){
   printf("hehehe sorry no id: no entry: ");
     }
  else {
   printf ("entry denied! no Id and underage!");
      }
  system ("pause");
  return 0;
     }

