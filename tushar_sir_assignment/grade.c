#include<stdio.h>
int main()
{
    int n;
    scanf("Enter the Number:");
    scanf("%d",&n);

    if(n>=80 && n<=100)
       printf("He got A+");

    else if(n>=70)
       printf("He got A");

    else if(n>=60)
       printf("He got A-");

    else if(n>=50)
      printf("He got B");

    else if(n>40)
       printf("He got C");

    else if(n>=33)
       printf("He got D");

    else if(n>=0 && n<33)
       printf("He failed in the exam");

   default
       printf("Invaid input");
}