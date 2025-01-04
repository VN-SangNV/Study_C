/*Nhập vào một số xe (gồm 5 chữ số).
Hãy cho biết số xe đó có bao nhiêu nút*/
#include <stdio.h>
#include <stdlib.h>

int number = 999999;
int sumOfNumber = 0;
int point = 0;

int main()
{
    while(number > 99999 || number < 10000){
        printf("Nhap bien so xe: ");
        scanf("%d", &number);
        if(number > 99999 || number < 10000){
            printf("So da nhap khong hop le!\nVui long nhap lai.\n\n");
        }
    }
    system("cls");
    for(int i = 0; i < 5; i++){
        sumOfNumber += (number%10);
        number /= 10;
    }

    point = sumOfNumber%10;
    printf("So xe da nhap co %d nut!\nXin cam on!!!", point);
    return 0;
}
