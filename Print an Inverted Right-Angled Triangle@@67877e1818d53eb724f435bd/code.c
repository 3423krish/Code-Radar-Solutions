#include <stdio.h>

int main() {
    int A;
    scanf("%d",&A);
    for(int i=A; i>=1;i--){
        for (int j=1; j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}