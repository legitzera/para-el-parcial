#include <stdio.h>

//PROTOTIPOS
int validar (int, int, int);
int negativo (int);
float promedio (int, int);
void mostrar (int, int);

//BLOQUE PRINCIPAL
int main ()
{
    int num, band = 0, cant_negativos = 0, suma_negativos = 0, cant_positivos = 0, suma_positivos = 0;
    int menor, posicion, posicion_actual = 1;

    printf ("Ingrese un numero entre -50 y 50 (-100 para finalizar): ");
    num = validar (-50, 50, -100);

    while (num != -100)
    {
        if (band = 0 || num < menor)
        {
            band = 1;
            menor = num;
            posicion = posicion_actual;
        }

        if (negativo(num))
        {
            cant_negativos ++;
            suma_negativos += num;
        }
        else
        {
            cant_positivos ++;
            suma_positivos += num;
        }

        posicion_actual ++;
        printf ("Ingrese un numero entre -50 y 50 (-100 para finalizar): ");
        num = validar (-50, 50, -100);
    }

    int suma = suma_negativos + suma_positivos;
    int cantidad = cant_negativos + cant_positivos;
    printf ("La cantidad de numeros negativos ingresados es: %d\n", cant_negativos);
    printf ("El promedio de numeros positivos es: %.1f\n", promedio(suma_positivos, cant_positivos));
    printf ("El promedio de TODOS los numeros es: %.1f\n", promedio(suma, cantidad));
    mostrar(menor, posicion);

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
        printf ("Numero incorrecto, intente de nuevo: ");
    }
    band = 1;
    scanf ("%d", &num);

    }while ((num < li || num > ls) && num != cierre);

    return num;
}

int negativo (int num)
{
    if (num < 0)
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

void mostrar (int menor, int posicion)
{
    printf ("El menor numero ingresado es: %d, en la posicion %d", menor, posicion);
}
