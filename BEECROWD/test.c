#include <stdio.h>
#include <string.h>

int main() {
   char num[20];
   int i, len;
   printf("Enter a number: ");
   scanf("%s", num);
   len = strlen(num);
   for (i = 0; i < len/2; i++) {
      if (num[i] != num[len-i-1]) {
         printf("%s is not a palindrome", num);
         return 0;
      }
   }
   printf("%s is a palindrome", num);
   return 0;
}
