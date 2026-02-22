#include <stdio.h>
int main(){
    int i = 0;
    int num1;

    printf("Ingreso de datos \n");
    scanf("%d", &num1);
    while (i < num1)
    {
        i++;
        printf("Contador: %d \n", i);
    }
    
    return 0;
}