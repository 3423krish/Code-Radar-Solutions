#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int num=0;
    for(int i=1;i<=a;i++){
        // for(int k=1;k<=a-i;k++){
        //     printf(" ");
        // }
        int num = (i%2==0)?1:0;
        for(int j=1;j<=i;j++){
            // printf(" ");
           
            printf("%d ",num);
            // printf(" ");
            num=1-num;
        }
        printf("\n");
    }
}