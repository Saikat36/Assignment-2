//6. Write a program which takes a character as an input and displays its ASCII code

#include<stdio.h>
#include<conio.h>

int main()
{
    char x;
    printf("Enter any Character: ");
    scanf("%c",&x);
    printf("\"%c\" ASCII Value is: %d",x,x);
    return 0;
}
