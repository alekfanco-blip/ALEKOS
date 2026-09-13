#include <stdio.h>

int main(void){
    int pick;
    int num1;
    int num2;

    printf("hello, please pick from 1,2,3,4 \n 1,add \n 2,subtract \n 3 multiply \n 4 devide ");
    scanf("%d",&pick);

    if (pick == 1 ){
        printf("please type your first number");
        scanf("%d",&num1);

        printf("now the 2nd number ");
        scanf("%d", &num2);

        printf("so %d + %d = %d",num1,num2,num1 + num2);
    }

    else if (pick == 2){
        printf("pick your first number");
        scanf("%d",&num1);

        printf("now pick the second number");
        scanf("%d",&num2);

        printf(" %d - %d = %d", num1,num2,num1 - num2);
    }

    else if (pick == 3){
        printf("pick your first number");
        scanf("%d",&num1);

        printf("now pick the second number");
        scanf("%d",&num2);

        printf("%d x %d = %d ", num1,num2, num1 * num2);
    }

    else if (pick == 4){
        printf("pick your first number");
        scanf("%d",&num1);

        printf("now pick the second number");
        scanf("%d",&num2);
        if (num2 == 0){
            printf("you can't divide by zero\n");
        } else {
            printf("%d/%d = %d ", num1, num2, num1 / num2);
        }
    }
    else {
        printf("you must pick 1 out of 4 lol");
    }
    

    return 0;
}