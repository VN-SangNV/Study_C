/*Nhập vào số tự nhiên n.
Kiểm tra xem n có phải là số nguyên tố hay không.*/
#include <stdio.h>
#include <stdlib.h>

int n;
int flag = 1;

int main()
{
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        if(n%i == 0){
            printf("%d khong phai la so nguyen to!\a", n);
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("%d la so nguyen to!\a", n);
    }
    return 0;
}
