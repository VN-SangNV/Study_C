/*
Trên mặt phẳng tọa độ OXY cho ba điểm A(Xa, Ya), B(Xb, Yb), C(Xc, Yc)
và một điểm M(Xm, Ym). Xác định M nằm trong, nằm ngoài hay nằm trên các cạnh của tam giác ABC.
*/
#include <stdio.h>
#include <stdlib.h>

float xA, yA, xB, yB, xC, yC, xM, yM;
float sABC, sMAB, sMAC, sMBC;

float acreageOfTriagle(float xA, float yA, float xB, float yB, float xC, float yC){
    float acreage = 0.5*abs((xB-xA)*(yC-yB)-(xC-xB)*(yB-yA));
    return acreage;
}
int main()
{
    printf("Enter the triangle position: \n");
    printf("A(X,Y): ");
    scanf("%f %f", &xA, &yA);
    printf("B(X,Y): ");
    scanf("%f %f", &xB, &yB);
    printf("C(X,Y): ");
    scanf("%f %f", &xC, &yC);
    printf("Enter the M(X,Y) point: ");
    scanf("%f %f", &xM, &yM);

    sABC = acreageOfTriagle(xA, yA, xB, yB, xC, yC);
    sMAB = acreageOfTriagle(xA, yA, xB, yB, xM, yM);
    sMAC = acreageOfTriagle(xA, yA, xM, yM, xC, yC);
    sMBC = acreageOfTriagle(xM, yM, xB, yB, xC, yC);

    if((sMAB + sMAC + sMBC) == sABC){
        if(sMAB == 0 || sMAC == 0 || sMBC == 0){
            printf("The M point lies on the ABC triangle!\a");
        }else{
            printf("The M point is inside of the ABC triangle!\a");
        }
    }else{
        printf("The M point is outside of the ABC triangle!\a");
    }
    return 0;
}
