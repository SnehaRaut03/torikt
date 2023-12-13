#include <stdio.h>
int cube(int num){
    return num*num*num;
}
int main(){
    int number;
    printf("enter a number: ");
    scanf("%d",&number);

    printf("Cube of %d is %d \n",number,cube(number));
    return 0;
}