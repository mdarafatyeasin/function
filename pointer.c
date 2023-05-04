#include<stdio.h>
int main()
{
    int x = 50;
    printf("%p\n", &x); //it will give variable memory addr.
    int * nasa = &x;
    printf("%d\n", *nasa); //it will give the addr. value
    // printf("%p\n", &x);
    *nasa = 15; // it will change the addr. value
    // printf("%d", x);

    return 0;
}