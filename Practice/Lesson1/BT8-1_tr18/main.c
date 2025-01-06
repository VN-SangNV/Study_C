/*
a. Nhập vào số tự nhiên n. Tìm các số nguyên tố nhỏ hơn hoặc bằng n.
b. Nhập vào số tự nhiên n. Tìm n số nguyên tố đầu tiên.
*/
#include <stdio.h>
#include <stdlib.h>

int n;
int count = 0;
int round = 1;
int flag = 1;

int aSolution(int n){
    printf("So nguyen to nho hon hoac bang %d: \n", n);
    for(int i = 1; i < (n+1); i++){
        for(int j = 2; j < i; j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            printf("%d\n", i);
        }else{
            flag = 1;
        }
    }
}

int bSolution(int n){
    printf("%d so nguyen to dau tien: \n", n);
    if(n > 0){
        while(count != n){
        for(int j = 2; j < round; j++){
            if(round%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            printf("[%d] = %d\n", count+1, round);
            count++;
        }else{
            flag = 1;
        }
        round++;
    }
    }
}
int main()
{
    printf("Enter \"n\": ");
    scanf("%d", &n);
    aSolution(n);
    bSolution(n);
    return 0;
}
