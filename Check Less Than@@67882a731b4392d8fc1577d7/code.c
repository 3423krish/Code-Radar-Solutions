#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("False");
    }
    else if(b<a){
    printf("True");
    }
    return 0;
}