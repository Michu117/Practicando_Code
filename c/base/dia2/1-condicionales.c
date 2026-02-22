#include <stdio.h>
int main (){
    int nota = 99;
    if (nota > 90)
    {
        printf("Excelente \n");
    }else if (nota > 75)
    {
        printf("Muy Bien \n");
    }else if (nota > 50)
    {
        printf("Aprobado \n");
    }
    else{
        printf("Reprobado \n");
    }

}