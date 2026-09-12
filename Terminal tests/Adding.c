#include <stdio.h>

int main(void) {
   printf("what is your name?\n");
   char name[50];
   scanf("%49s", name);
   return 0; 
}