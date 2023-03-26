#include<stdio.h>
#include<conio.h>

int main()
{
	 int n, count=1, flag, i=2, j;
	 printf("Enter how many prime numbers:");
	 scanf("%d", &n);

	 /* Generating prime numbers */
	 while(count <= n)
	 {
		  flag = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
			    flag=1;
			    break;
			   }
		  }
		  if(flag==0)
		  {
			   printf("%d\t",i);
			   count++;
		  }
		  i++;
	 }
	 return(0);
}
