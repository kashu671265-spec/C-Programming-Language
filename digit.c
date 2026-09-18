/* Program to check if character is a digit or not */

#include <stdio.h>
#include <ctype.h>

int main() {
    // 1st method ->
   // char ch;

    //printf("Enter any character:");
  //  scanf("%c", &ch);

   // if(ch >= '0' && ch <= '9') {
   //     printf("'%c' is a digit \n", ch);
  //  } else {
   //     printf("'%c' is not a digit \n", ch);
   // } 
   // return 0;  

   // 2nd method ->

   char ch;

   printf("Enter any character:");
   scanf("%c", &ch);

   // isdigit() returns a non zero value if TRUE , 0 if FALSE 
   if(isdigit((unsigned char) ch)) {
      printf("'%c' is a digit \n",ch);
   } else {
    printf("'%c' is not a digit \n",ch);
   } 
   return 0;
}
