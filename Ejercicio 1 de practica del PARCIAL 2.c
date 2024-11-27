#include <stdio.h>

//PROTOTIPOS
int validar (int, int, int);
int par (int);
float promedio (int, int);
void mostrar (int, int);

//BLOQUE PRINCIPAL
int main ()
{
    int num, band = 0, cant_pares = 0, cant_impares = 0, suma_impares = 0;
    int mayor, posicion, posicion_actual = 1;

    printf ("Ingrese un numero entre -40 y 40 (100 para finalizar): ");
    num = validar (-40 , 40, 100);

    while (num != 100)
    {
        if (band = 0 || num > mayor)
        {
            band = 1;
            mayor = num;
            posicion = posicion_actual;
        }

        if (par(num))
        {
            cant_pares ++;
        }
        else
        {
            cant_impares ++;
            suma_impares += num;
        }

        posicion_actual ++;
        printf ("Ingrese un numero entre -40 y 40 (100 para finalizar): ");
        num = validar (-40 , 40, 100);
    }

    printf ("La cantidad de numeros pares ingresados es: %d\n", cant_pares);
    printf ("El promedio de numeros impares es: %.1f\n", promedio(suma_impares, cant_impares));
    mostrar (mayor, posicion);

    return 0;
}

//DESARROLLO DE FUNCIONES
int validar (int li, int ls, int cierre)
{
    int num, band = 0;

    do
    {
    if (band == 1)
    {
        printf ("El numero ingresado es incorrecto, vuelva a intentarlo: ");
    }

    band = 1;
    scanf ("%d", &num);

    }while ((num < li || num > ls) && num != cierre);

    return num;
}

int par (int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float promedio (int suma, int cantidad)
{
    float prom = 0;

    if (cantidad > 0)
    {
        prom = (float)suma / cantidad;
    }

    return prom;
}

void mostrar (int mayor, int posicion)
{
    printf ("El mayor numero ingresado es: %d, en la posicion %d", mayor, posicion);
}
