#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        a[i] = i;
    }
    for (i = 0; i < 5; i++)
    {
         printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
