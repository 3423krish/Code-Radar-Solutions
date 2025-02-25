// Your code here...
#include <stdio.h>

int main(){
    int a=5;
    int num=1;
    for(int i=1;i<=a;i++){
        for(int k=1;k<=a-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            // printf(" ");
            printf("%d ",num);
            num=num++;
            // printf(" ");
        }
        printf("\n");
    }
}