/*Nhập vào 2 số nguyên. Tính min và max của 2 số nguyên đó*/
#include <stdio.h>
#include <stdlib.h>

int firstNumber = 0;
int secondNumber = 0;

int main()
{
    printf("Entrer both numbers: \nFirst number: ");
    scanf("%d", &firstNumber);
    printf("Second number: ");
    scanf("%d", &secondNumber);

    if(firstNumber > secondNumber){
        printf("\nMax number: %d\nMin number: %d", firstNumber, secondNumber);
    }
    else{
        printf("Max number: %d\nMin number: %d", secondNumber, firstNumber);
    }
    return 0;
}
