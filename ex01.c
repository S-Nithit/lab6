#include <stdio.h>

int main(){
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
        printf("Student %d name is %s, age %d.\n",i,student[i].name,student[i].age);
    }
    printf("\n");


    return 0;
}