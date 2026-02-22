#include <stdio.h>
int main(){
    int i = 0;
    int num1;

    printf("Ingreso de datos \n");
    scanf("%d", &num1);
    
    do
    {
        i++;
        printf("Contador: %d \n", i);
    } while (i < num1);
    
    return 0;
}