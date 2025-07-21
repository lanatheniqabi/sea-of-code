#include <stdio.h>

int main() 
{
    int x;

    printf("What are your grades? "); 
    scanf("%d", &x);        

    // The if-else block must be INSIDE the main function
    if (x > 5)
    {
        printf("you pass!\n");
    }
    else 
    {
        printf("you fail :(\n");
    }

    return 0;
}
