#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hob[100];
    scanf("%s %d %s",&name, &age, &hob);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hob);
    return 0;
}