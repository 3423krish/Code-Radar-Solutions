#include <stdio.h>

int main(){
    int a,sum=0;
    scanf("%d",&a);
    int n[a];
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(int i=0;i<a;i++){
        int num=n[i];
        while (num > 0) {
            int digit = num % 10;
            sum += digit;        
            num /= 10;           
        }
        printf("%d ",sum);
    }
}