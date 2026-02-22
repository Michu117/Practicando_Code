#include <stdio.h>
int main(){
    int num1;
    printf("Ingreso de datos \n");
    scanf("%d", &num1);
    for (int i = 0; i <= num1; i++){
        if (i % 2 == 0)
        {
            printf("contador pares: %d \n", i);
        }
    }
    
    return 0;
}