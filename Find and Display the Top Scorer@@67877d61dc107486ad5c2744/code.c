#include <stdio.h>
#include <string.h>

struct Student{
    int roll;
    char name[20];
    float marks;
};

int main() {
    int n;
    scanf("%d",n);
    struct Student S[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&S[i].roll,&S[i].name,&S[i].marks);
    }
    for(int i=o;i<n;i++){
        printf("%d %s %.2f ",S[i].roll,S[i].name,S[i].marks);
    }
    return 0;
}