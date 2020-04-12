#include<stdio.h>
void matrix_multiply(){
    int A[2][4]={{1,2,3,4},{1,2,3,4}};
    int B[4][3]={{3,2,1},{1,2,3},{1,3,9},{2,4,3}};
    int S[2][3];
 
    int i,j,k;
    int sum;
 
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            sum=0;
            for(k=0; k<4; k++){
                sum= sum + A[i][k] * B[k][j];
            }
            S[i][j]=sum;
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d\t",S[i][j]);
        }
        printf("\n");
    }
 
}
 
int main(void){
    matrix_multiply();
    return 0;
}
