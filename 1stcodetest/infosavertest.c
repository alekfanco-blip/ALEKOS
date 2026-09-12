#include <windows.h>

int main(void)
{
    int a = 10;
    int b = 7;
    int result = a - b;

    MessageBoxA(
        NULL,
        "10 - 7 = 3",
        "Day 2",
        MB_OK
    );

    return 0;
}