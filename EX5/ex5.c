#include <stdio.h>
int main() 
{
    int num;

    do 
    {
        printf("Please Enter a Positive Number:");
        scanf("%d", &num);
    } while (num <= 0);

    printf("You entered: %d\n", num);

    return 0;
}
