#include <stdio.h>

int main()

{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
again:
    if (c % a == 0 && c % b == 0)
    {
        printf("%d", c);
    }
    else
    {
        c++;
        goto again;
    }

    return 0;
}
