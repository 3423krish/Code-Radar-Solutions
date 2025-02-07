#include <stdio.h>

int main(){
    long a;
    scanf("%ld",&a);
    if (a & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}