#include <stdio.h>

int sum(int x, int y)
{
    // printf("%d + %d", x + y);
    int sum = x + y;
    return sum;
}
int a, b;
int main()
{
    scanf("%d %d", &a, &b);
    int s = sum(a, b);
    printf("%d", s);
    return 0;
}