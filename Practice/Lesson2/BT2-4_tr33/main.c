/*
Cho số tự nhiên x có n chữ số
a. Tính tổng các chữ số của x
b. Kiểm tra n có đối xứng hay không
*/
#include <stdio.h>
#include <stdlib.h>

int x, n, firstDigit;
int flagOfMirror = 1;
int quantityOfNumber, sumOfNumber;

int main()
{
    printf("Enter \"x\" number: ");
    scanf("%d", &x);

    n = x;
    do{
        quantityOfNumber++;
        n /= 10;
    }while(n > 0);
//    printf("QuantityOfNumber = %d\n", quantityOfNumber);
    n = x;
    for(int i = 0; i < quantityOfNumber; i++){
        sumOfNumber += n%10;
        n /= 10;
    }
    printf("\nSum of number = %d\n", sumOfNumber);

    n = x;
    for(int i = 0; i < quantityOfNumber/2; i++){
        firstDigit = n/pow(10, quantityOfNumber-1-i*2);

        if(firstDigit != n%10){
            printf("The number isn't symmetrical!\a");
            flagOfMirror = 0;
            break;
        }
        n -= firstDigit*pow(10, quantityOfNumber-1-i*2);
        n /= 10;
    }
    if(flagOfMirror == 1){
        printf("The number is symmetrical!");
    }
    return 0;
}
