/*Nhập vào số tự nhiên n.
Kiểm tra xem n có phải là số chính phương hay không.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n, check;

int main()
{
    printf("Enter the number: ");
    scanf("%d", &n);

    if(pow(round(sqrt(n)), 2) == n){
        printf("%d la so chinh phuong!\n\a", n);
    }else{
        printf("%d khong phai la so chinh phuong!\n\a", n);
    }
    return 0;
}
