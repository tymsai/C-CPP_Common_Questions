#include<stdio.h>
int main(){
    system("cls");
    int j;
    printf("Enter the number to find is it divisible by 3\n");
    scanf("%d",&j);
    if (j%3==0){
        printf("divisible");
    }
    else
    printf("not divisible");
    return 0;
}