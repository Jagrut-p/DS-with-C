#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char str[30];
char stack[30];
int main()
{
    int i = 0;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    do{
        stack[i] = str[i];
        i++;
    }while(str[i] != '\0');
    for (i = 0; stack[i] != '\0'; i++)
    {
        printf("%c", stack[i]);
    }
    return 0;
}