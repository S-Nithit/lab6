#include <stdio.h>
#include <string.h>

struct pro {
    char name[20];
    int id;
    float grade1; 
    float grade2; 
    float grade3; 
    float grade4; 
    float gavg;   
};

int main() {
    struct pro s[3];
    float subjAvg[4]; 
    char *subjects[4] = {"Math", "English", "Science", "History"};

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d: ", i+1);
        scanf("%s %d %f %f %f %f", s[i].name, &s[i].id,
              &s[i].grade1, &s[i].grade2, &s[i].grade3, &s[i].grade4);
        s[i].gavg = (s[i].grade1 + s[i].grade2 + s[i].grade3 + s[i].grade4) / 4.0;
    }

    printf("\nStudent Averages:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, s[i].gavg);
    }

    int topStudent = 0;
    for (int i = 1; i < 3; i++) {
        if (s[i].gavg > s[topStudent].gavg) {
            topStudent = i;
        }
    }
    printf("\nTop Student: %s with average %.2f\n", s[topStudent].name, s[topStudent].gavg);

    subjAvg[0] = (s[0].grade1 + s[1].grade1 + s[2].grade1) / 3.0; 
    subjAvg[1] = (s[0].grade2 + s[1].grade2 + s[2].grade2) / 3.0; 
    subjAvg[2] = (s[0].grade3 + s[1].grade3 + s[2].grade3) / 3.0; 
    subjAvg[3] = (s[0].grade4 + s[1].grade4 + s[2].grade4) / 3.0; 

    printf("\nSubject Averages:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: %.2f\n", subjects[i], subjAvg[i]);
    }

    int topSubject = 0;
    for (int i = 1; i < 4; i++) {
        if (subjAvg[i] > subjAvg[topSubject]) {
            topSubject = i;
        }
    }
    printf("\nTop Subject: %s with average %.2f\n", subjects[topSubject], subjAvg[topSubject]);

    return 0;
}
