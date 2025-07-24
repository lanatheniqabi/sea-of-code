#include <cs50.h>
#include <stdio.h>
int main()
{
int x = get_int("Integer: ");    
int y = get_int("Integer: ");
if (x < y)
{
printf("x is less than y.\n");
}
else if (x > y)
{
printf("x is greater than y.\n");
}
else
{
printf("x is equal to y.\n");
}
return 0; 
}