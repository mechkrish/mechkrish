#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

 
    if(number % 4 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    getch();
}
