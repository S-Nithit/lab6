#include <stdio.h>
int main(){
    struct vec{
        int time1;
        int time2;
        int sum;
        int sumtime1;
    }
    a[3];
    printf("Time input (m:s): ");
    scanf("%d:%d",&a[0].time1,&a[0].time2);
    printf("Time input (m:s): ");
    scanf("%d:%d",&a[1].time1,&a[1].time2);
    printf("Time input (m:s): ");
    scanf("%d:%d",&a[2].time1,&a[2].time2);
    printf("\n");

    a[0].sumtime1 = (a[0].time1*60) + (a[1].time1*60) + (a[0].time1*60);
    a[0].sum =  a[0].sumtime1 + a[0].time2 + a[1].time2 + a[2].time2;
    printf("Total time elasped: %d second(s)",a[0].sum);
    printf("\n");


    return 0;
}