#include<stdio.h>
int main(){
    int a[3][3];
    for(int i=0; i<3 ; i++){
        for (int j = 0; j < 3; j++)
        {
        printf("enter the A%d%d value  ",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    for(int y=0; y<3 ; y++){
        for (int s = 0; s < 3; s++)
        {
        printf("  %d",a[y][s]);
        }
        printf("\n");
    }
    return 0;
}
