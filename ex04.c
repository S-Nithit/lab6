#include <stdio.h>
int main(){
    struct vec{
        float ux;
        float uy;
        float vx;
        float vy;
        float xsum;
        float ysum;
    }
    a[1];
    printf("u_x: ");
    scanf("%f",&a[0].ux);
    printf("u_y: ");
    scanf("%f",&a[0].uy);
    printf("v_x: ");
    scanf("%f",&a[0].vx);
    printf("v_y: ");
    scanf("%f",&a[0].vy);
    printf("\n");

    a[0].xsum = (a[0].ux+a[0].vx);
    a[0].ysum = (a[0].uy+a[0].vy);
    printf("Resultant vector is equvalence to %.1fi + %.1fj",a[0].xsum,a[0].ysum);
    printf("\n");


    return 0;
}