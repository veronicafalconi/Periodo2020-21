/******************************************************************************

Crear un programa que permita determinar el factorial de un número.

Datos de entrada: 
    -Número entero, factorial=1,cont=1.
Proceso:
    -Mostrar en pantalla: "Ingrese el número cuyo factorial quiere obtener".
    -Ingresar el número.
    -Reducir el número en 1
    -Multiplicar el número original por el número reducido en uno.
    -


*******************************************************************************/
#include <stdio.h>

void main()
{
    int num,cont=1,inc,n1=1;
    printf("Ingrese un número ");
    scanf("%i",&num);
    printf("%i\n",cont);
    do
    {
        cont=cont+1;
        n1=(n1*10)+cont;
        printf("%i\n",n1);
        num--;
        
    }while (num>=2);
}
