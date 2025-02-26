#include <stdio.h>

int main(){
    int a,count=0,counto=0;
    scanf("%d\n",&a);
    int n[a];
    for(int i=0;i<=a-1;i++){
        scanf("%d ",&n[i]);
        // printf("%d",n[i]);
    }
    for(int i=0;i<a;i++){
        if(n[i]%2==0){
            count++;
            // printf("%d",n[i]);
        }
        // else{
        //     count=0;
        // }
        
    }
    for(int i=0;i<a;i++){
        if(n[i]%2!=0){
            counto++;
            // printf("%d",n[i]);
        }
        // else{
        //     counto=0;
        // }
    }
    printf("%d ",count);
    printf("%d",counto);

}