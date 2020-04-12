#include <stdio.h>
#include <windows.h>

int qq(int a, int b){
    if (a == 0 || b == 0 || a == b)
        return 1;
    else
        return qq(a - 1, b) + qq(a - 1, b - 1);
}
 
int main(){
    int a, i, j;
    scanf("%d", &a);
    system("cls"); 
    for (i = 0; i < a; i++){
        for (j = 0; j <= i; j++){
            printf("%d   ", qq(i, j));
        }
        printf("\n");
    }
    return 0;
}

