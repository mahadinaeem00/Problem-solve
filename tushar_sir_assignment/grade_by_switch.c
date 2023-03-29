#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);

    switch(n/10)
    {
        case 10:
        case 9:
        case 8:
            printf("He got A+");
            break;

        case 7:
            printf("He got A");
            break;

        case 6:
            printf("He got A-");
            break;

        case 5:
            printf("He got B");
            break;

        case 4:
            printf("He got C");
            break;
            
        case 3:
            if(n < 33)
                printf("He failed in the exam");
            else
                printf("He got D");
            break;
        
        case 2:
        case 1:
        case 0:
            printf("He failed in the exam");
            break;

        default:
            printf("Invalid index");
            break;
    }

    return 0;
}
