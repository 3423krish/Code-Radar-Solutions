#include <stdio.h>
int isPrime(int num){
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
        t--;
    }
    return 0;
}
// int isPrime(int a){
//     int count=0;
    
//     for(int i=1;i<=a;i++){
//         if(a%i==0){
//             count++;
//         }
//     }
//     if(count==2)return 1;
//     else{
//         return 0;
//     }
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     printf("%d",isPrime(a));
// }