 #include<stdio.h>
int main()
{
    int n,i,rem;
    scanf("%d",&n);
    int ara[100];
    int count=0;

    for(i=0;n>0;i++)
    {
      rem=n%10;
      count++;
      n/=10;

      ara[i]=rem;
    }

    int flag=0;
    for(i=0;i<count/2;i++)
    {
        if(ara[i] != ara[count-i-1])
            flag++;
    }
    if(flag==0)
        printf("Pallindrome");
    else
        printf("Not pallindrome");


   return 0;
}

