#include <stdio.h>
#include <string.h>

struct Student{
    int roll_no;
    char Name[20];
    float Marks;
}

int main() {
    int N;
    scanf("%d",&N);
    struct Student S[N];
    for(i=0;i<N;i++){
        scanf("%d %c %f",&S[i].roll_no,&S[i].Name,&S[i].Marks);
    }
    for(i=0;i<N;i++){
        printf("Roll Number: %d, Name: %c, Marks: %f",S[i].roll_no,S[i].Name,S[i].Marks);
    }
    return 0;
}