#include <stdio.h>
#include <ctype.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=a;i<=1;i--){
        for(int j=0;j=a-i;j++){
            printf("\n");
        }
        for(char j=A;j<2*a-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}