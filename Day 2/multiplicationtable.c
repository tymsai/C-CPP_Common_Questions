#include<stdio.h>
int main(){
    system("cls");
    int j;
    printf("Enter the number to find its multiplication table\n");
    scanf("%d",&j);
    for(int i=0;i<11;i++){
    printf("j * %d = ",i);
    printf("%d",i*j);
    printf("\n");
    }
    return 0;
}