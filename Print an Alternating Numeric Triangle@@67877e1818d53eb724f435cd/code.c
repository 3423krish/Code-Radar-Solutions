#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int num=0;
    for(int i=1;i<=a;i++){
        // for(int k=1;k<=a-i;k++){
        //     printf(" ");
        // }
        num++;
        for(int j=1;j<=i;j++){
            // printf(" ");
            printf("%d ",num);
            num--;
            // printf(" ");
        }
        printf("\n");
    }
}