// Your code here...
#include <stdio.h>

int main(){
    int a=5;
    for(int i=0;i<=a;i++){
        for(int k=1;k<=2*a-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            // printf(" ");
            printf("%d ",j);
            // printf(" ");
        }
        printf("\n");
    }
}