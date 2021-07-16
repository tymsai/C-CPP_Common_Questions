#include<stdio.h>
int main(){
    system("cls");
    printf("Assumptions in the program : \n1. The Max Marks of all subjects is 600 ,\n2. Each subject has a Max Marks of 100\n");
    for (int j,y=0,i = 1; i < 7; i++){
        printf("Enter the marks of %d subject  :  ",i);
        scanf("%d",&j);
        y=y+j;
        if (i<7 && i>5)
        printf("Total Percentage : %d",(y*100)/600);   
    }
    return 0;
}