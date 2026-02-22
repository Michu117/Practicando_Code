#include <stdio.h>
int main(){
    double num, suma;
    int error = 0; // control de errores != 0 == error
    for (int i = 0; i < 4; i++)
    {
        printf("Ingrese el numero_%d: ", i);
        scanf("%lf", &num);
        if (num < 0.0)
        {
            printf("No se pueden ingresar negativos \n");
            error = 1;
            break;
        }
        // suma = suma + num;
        suma += num;  
    }
    
    if (!error)
    {
        printf("El resultado es: %.2lf \n", suma);    
    }
    return 0;
}