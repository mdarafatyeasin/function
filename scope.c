#include<stdio.h>
int x = 15;
int sum ()
{
    int p = 10;
    printf("new function = %d\n", p); //scope
}
int main()
{
    int q = 5;
    int s = sum();
    printf("main function = %d\n", q); //scope
    printf("global function = %d", x); //global variable
    
    return 0;
}