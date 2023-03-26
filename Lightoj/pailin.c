#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  gets(a);
  int length;
  length=strlen(a);
  int count=0;
  for(int i=0;i<length/2;i++)
  {
      if(a[i]!=a[length-i-1])
        count++;
  }
  if(count==0)
    printf("Palindrome");
  else
    printf("Not palindrome");

  return 0;
}
