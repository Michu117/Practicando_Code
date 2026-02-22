#include <stdio.h>
int main(){
    int i, j, numtabla, max;
    
    printf("Ingrese el numero de tablas \n");
    scanf("%d", &numtabla);
    printf("Ingrese el multiplo maximo a multiplicar \n");
    scanf("%d", &max);

    for (i = 1; i <= numtabla; i++)
    {
        for (j = 0; j <= max; j++)
        {
            printf("%d x %d = %d \n",i,j, i * j);
        }
        printf("\n");
    }
    return 0;
}