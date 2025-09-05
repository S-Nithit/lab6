#include <stdio.h>

int main(){
    float a = 0;
    int m = 0;
    struct profile{
        char name[100];
        int age;
        float score;
    }
    student[3];
    for(int i=0;i<=2;i++){
        printf("Student[%d]\n",i);
        printf("name: ");
        scanf("%s",student[i].name);
        printf("age: ");
        scanf("%d",&student[i].age);
        printf("score: ");
        scanf("%f",&student[i].score);
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<=2;i++){
        if(student[i].score > a){
            a = student[i].score;
            m = i;
            
        }
    }
    printf("The highest scores belongs to %s at %.1f scores!",student[m].name,student[m].score);
    printf("\n");


    return 0;
}