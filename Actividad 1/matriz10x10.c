
#include <stdio.h>

//multiplicar dos matrices de 10x10


int main()
{
    int a[10][10]={1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1};
    int b[10][10]={1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1};
    int r[10][10];
    
    for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            int suma = 0;
            for(int k=0;k<10;k++){
                suma+= a[i][k] * b[k][j];
            }
            r[i][j] = suma;
        }
    }
    
    for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            printf("%d ", r[i][j]);
        }
        printf("\n");
        
    }

}
