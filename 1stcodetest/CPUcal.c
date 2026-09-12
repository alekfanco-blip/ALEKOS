#include <windows.h>
#include <stdio.h>

int main(void){
    int a = 5;
    int b = 3;

    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;

    char message[200];

    sprintf(
        message,
        "A = %d, B = %d\nAddition: %d\nSubtraction: %d\nMultiplication: %d\n",
        a, b, addition, subtraction, multiplication
    
    );
    MessageBox(
        NULL,
        message,
        "day 3 - cpu calulator",
        MB_OK

    );

    return 0;
}