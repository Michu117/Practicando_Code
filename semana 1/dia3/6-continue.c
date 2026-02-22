#include <stdio.h>
int main(){
    double num, suma;
    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese el numero_%d: ", i);
        scanf("%lf", &num);
        if (num < 0.0)
        {
            printf("No se pueden ingresar negativos \n");
            // se continuaran sumando los positivos
            continue;
        }
        suma += num;  
    }
    printf("El resultado es: %.2lf \n", suma);    
    return 0;
}