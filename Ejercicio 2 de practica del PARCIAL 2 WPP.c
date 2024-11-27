#include <stdio.h>

//PROTOTIPOS
int validar (int, int);
void sinCant (int [], int);

//BLOQUE PRINCIPAL
int main ()
{
    int producto, cantidad, v[100] = {0}, suma_cont = 0, pedidos = 0, i;
    float promedio;

    printf ("Ingrese el codigo de producto, de 1 a 100 (0 para finalizar): ");
    producto = validar(0, 100);

    while (producto != 0)
    {
        printf ("Ingrese la cantidad de pedidos: ");
        scanf ("%d", &cantidad);
        v[producto - 1]+= cantidad;
        pedidos ++;
        suma_cont += cantidad;
        printf ("Ingrese el codigo de producto, de 1 a 100 (0 para finalizar): ");
        producto = validar(0, 100);
    }

    if (pedidos > 0)
    {
        promedio = (float) suma_cont / pedidos;


    printf ("Listado de productos (50 al 100) y su cantidad solicitada:\n");
    for (i = 49; i < 100; i ++)
    {
        printf ("%d %d\n", i+1, v[i]);
    }



    printf ("Los productos que superaron el promedio total de unidades fueron:\n");
    for (i = 0; i < 100; i++)
    {
        if (v[i] > promedio)
        {
            printf ("Producto nro: %d ", i + 1);
        }
    }

    sinCant (v[100], 0);

    }

    return 0;
}

int validar (int li, int ls)
{
    int num;

    do
    {
        scanf ("%d", &num);
    }while (num < li || num > ls);

    return num;
}

void sinCant (int vector[], int cantidad)
{
    int i;

    printf ("Los productos sin unidades solicitadas fueron :\n");
    for (i = 0; i < 100; i ++)
    {
        if (vector [i] == cantidad)
        {
            printf ("Producto nro: %d\n", i + 1);
        }
    }
}
