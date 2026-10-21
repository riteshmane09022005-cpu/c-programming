#include <stdio.h>

void Display(int ino1, int ino2)
{
    int i = ino1;

    while (i <= ino2)
    {
        printf("%d\n", i);
        i++;
    }
}

int main()
{
    int ivalue1 = 0, ivalue2 = 5;

    Display(ivalue1, ivalue2);

    return 0;
}
