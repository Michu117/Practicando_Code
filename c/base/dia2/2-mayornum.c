#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Ingrese el primer numero \n");
    scanf("%d",  &num1);
    printf("Ingrese el segundo numero \n");
    scanf("%d",  &num2);
    printf("Ingrese el tercer numero \n");
    scanf("%d",  &num3);

    int mayor;
    if (num1 > num2){
        if (num1 > num3)
        {
            mayor = num1;
        }else{
            mayor = num3;
        }
        
    }else{
        if (num2 > num3)
        {
            mayor = num2;
        }else{
            mayor = num3;
        }
        
    }   

    printf("El numero mayor es: %d \n", mayor); 
    return 0;
}