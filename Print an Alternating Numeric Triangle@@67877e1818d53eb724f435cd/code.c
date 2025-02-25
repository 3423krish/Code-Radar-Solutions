#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int num=0;
    for(int i=1;i<=a;i++){
        // for(int k=1;k<=a-i;k++){
        //     printf(" ");
        // }

        for(int j=1;j<=i;j++){
            // printf(" ");
            num++;if(num==1){
                num=0;
            }
            printf("%d ",num);
            
            // printf(" ");
        }
        printf("\n");
    }
}