#include<stdio.h>
int main()
{
    char num[50];
    printf("Enter the string: ");
    scanf("%s",num);

    int length=0;
    while(num[length] != '\0')
    {
        length++;
    }
    printf("%d\n",length);

    int count=0;
    for(int i=0;i<length/2;i++)
    {
         if(num[i] != num[length-i-1])
            count++;
    }
    if(count==0)
        printf("Pallindrome");
    else
        printf("Not Pallindrome");

    return 0;
}
