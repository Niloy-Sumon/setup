#include <stdio.h>

int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("No");
    }
    else if (a == b && a == c && b == c)
    {
        printf("Yes");
    }

    else
    {
        printf("No");
    }
    return 0;
}