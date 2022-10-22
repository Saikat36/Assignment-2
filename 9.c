
//9. Write a program to make the last digit of a number stored in a variable as zero.
//   (Example - if x=2345 then make it x=2340)

#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y=0,temp;

    printf("Enter a Number: ");
    scanf("%d",&x);

    x = x/10;
    temp = x*10;
    printf("The number whose last digit is zero : %d",temp);


    return 0;
}
