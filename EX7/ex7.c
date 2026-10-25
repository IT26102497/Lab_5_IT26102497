#include <stdio.h>
int main() 
{
    int count = 5;

    while (count >= 0) 
    {
        printf("%d\n", count);
        count--;
    }
    
    printf("Countdown Complete.\n");

    return 0;
}
