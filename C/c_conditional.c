#include <stdio.h>

int main()
{
    int x = 2;
    char *msg = "";

    if (x > 0)
    {
        msg = "x > 0";
    }
    else
    {
        msg = "x <= 0";
    }
    printf("%s\n", msg);

    return 0;
}
