/*
Cho một hình chữ nhật có các cạnh song song với các trục tọa độ,
có tọa độ góc dưới trái là A(Xa, Ya) và tọa độ góc trên phải là B(Xb, Yb).
Hãy kiểm tra xem điểm M(Xm, Ym) có nằm trong hình chữ nhật trên hay không (nằm trên cạnh được xem như nằm trong).
Giả sử tọa độ các điểm là các số nguyên
*/
#include <stdio.h>
#include <stdlib.h>

int xA, xB, xM, yA, yB, yM;

int main()
{
    printf("Enter the position of A and B: \n");
    printf("A(x, y) = ");
    scanf("%d%d", &xA, &yA);
    printf("B(x, y) = ");
    scanf("%d%d", &xB, &yB);
    printf("Enter the position of M(x, y): ");
    scanf("%d%d", &xM, &yM);

    if(xM >= xA && xM <= xB && yM >= yA && yM <= yB){
        printf("\nThe position of M is inside of the rectangle!\a");
    }else{
        printf("\nThe position of M is outside of the rectangle!\a");
    }
    return 0;
}
