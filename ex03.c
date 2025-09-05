#include <stdio.h>
#include <math.h>
int main(){
    struct coor{
        float x1;
        float x2;
        float y1;
        float y2;
        float ans;
        float xsum;
        float ysum;
    }
    a[1];
    printf("x1: ");
    scanf("%f",&a[0].x1);
    printf("x2: ");
    scanf("%f",&a[0].x2);
    printf("y1: ");
    scanf("%f",&a[0].y1);
    printf("y2: ");
    scanf("%f",&a[0].y2);
    printf("\n");

    printf("\n");
    a[0].xsum = (a[0].x2-a[0].x1)*(a[0].x2-a[0].x1);
    a[0].ysum = (a[0].y2-a[0].y1)*(a[0].y2-a[0].y1);
    a[0].ans = sqrt(a[0].xsum + a[0].ysum);
    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)",a[0].x1,a[0].y1,a[0].x2,a[0].y2,a[0].ans);
    printf("\n");


    return 0;
}