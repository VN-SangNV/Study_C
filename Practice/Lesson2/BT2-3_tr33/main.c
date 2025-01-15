/*
Một số nguyên dương có k chữ số được gọi là số Armstrong
khi nó bằng tổng lũy thừa k của từng chữ số.
Nhập vào số nguyên dương k có n chữ số, hãy kiểm tra xem k có phải là số Armstrong hay không
Ví dụ: k = 153 là số Armstrong vì 153 = 1^3 + 5^3 + 3^3
*/
#include <stdio.h>
#include <stdlib.h>

int anyNumber, quantityOfNumber, checkItOut, compare;

int main()
{
    printf("Enter the number: ");
    scanf("%d", &anyNumber);

    checkItOut = anyNumber;
    compare = anyNumber;

    quantityOfNumber++;
    while(checkItOut > 10){
        quantityOfNumber++;
        checkItOut /= 10;
    }

    checkItOut = 0;
    for(int i = 1; i < quantityOfNumber + 1; i++){
        checkItOut += pow((compare%10),quantityOfNumber);
        compare /= 10;
    }

    if(checkItOut == anyNumber){
        printf("%d la so Armstrong!", anyNumber);
    }else{
        printf("%d khong phai la so Armstrong!", anyNumber);
    }
    return 0;
}
