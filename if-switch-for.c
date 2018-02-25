#include <stdio.h>

int main()
{
    int n, j, sum = 0;
    char x;    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            j = 1;
            break;
        case 2:
            j = 11;
            break;
        case 3:
            j = 21;
            break;
        default:
            j = 1;
            break;
    }


    for(int i=j; i <= j+9; i++)
    {
        sum += i;   // sum = sum+i;
    }

    
    

    printf("Sum = %d",sum);

    return 0;
}