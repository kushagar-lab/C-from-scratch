#include <stdio.h>
int main(){
float a, b, result;
char op;

 printf("Enter the expression eg (5 + 5): ");
 scanf("%f %c %f", &a, &op, &b); 
  switch(op){                      
  case '+':
  result = a + b;
  printf("Answer is: %.2f", result);
  break;

 case '-':
 result = a - b;
 printf("Answer is: %.2f", result);
 break;

 case '*':
result = a * b;
printf("Answer is: %.2f", result);
break;

case '/':
if(b == 0){
 printf("Error! Division by zero.");
} else {
result = a / b;
printf("Answer is: %.2f", result);
}
break;

default:
printf("Invalid operator!");
}                                 
return 0;
}
