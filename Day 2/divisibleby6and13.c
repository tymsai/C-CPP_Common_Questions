#include<stdio.h>
int main(){
    system("cls");
    int j;
    printf("Enter the number to find is it divisible by 3\n");
    scanf("%d",&j);
    if (j%6==0 && j%13==0){
        printf("divisible by 6 & 13");
    }
    else{
    printf("not divisible by 6 & 13");
    }
    return 0;
}