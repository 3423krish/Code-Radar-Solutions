#include <stdio.h>
#include <string.h>

struct Student{
    int roll_no;
    char Name[20];
    float Marks;
}

int main() {
    int N;
    for(i=0;i<N;i++){
        scanf("%d %c %f",roll_no[i],Name[i],Marks[i]);
    }
    for(i=0;i<N;i++){
        printf("Roll Number: %d, Name: %c, Marks: %f",roll_no[i],Name[i],Marks[i]);
    }
    return 0;
}