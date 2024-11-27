#include <stdio.h>
//
// PROTOTIPOS
int validar (int, int, int);
void sinCant (int [], int);

//BLOQUE PRINCIPAL
int main ()
{
    int i, producto, cantidad, v[100] = {0}, suma_cantidad = 0, pedidos = 0;
    float promedio;

    printf ("Ingrese el codigo del producto, entre 1 y 100 (0 para finalizar): ");
    producto = validar (1, 100, 0);

    while (producto != 0)
    {
        printf ("Ingrese el importe: $");
        scanf ("%d", &cantidad);
        v[producto - 1] += cantidad;
        pedidos ++;
        suma_cantidad += cantidad;
        printf ("Ingrese el codigo del producto, entre 1 y 100 (0 para finalizar): ");
        producto = validar (1, 100, 0);
    }

    if (pedidos > 0)
    {
        promedio = (float) suma_cantidad / pedidos;
    }

    printf ("Listado de productos del 50 al 100 (PRODUCTO - CANTIDAD)\n");
    for (i = 49; i < 100; i++)
    {
        printf ("%d - %d\n", i + 1, v[i]);
    }

    printf ("Los productos que superaron el promedio total de unidades pedidas son:\n");
    for (i = 0; i < 100; i ++)
    {
        if (v[i] > promedio)
        {
            printf ("Producto nro: %d\n", i + 1);
        }
    }

    sinCant (v, 0);

    return 0;
}

//DESARROLLO DE FUNCIONES
int validar (int li, int ls, int cierre)
{
    int num;

    do
    {
        scanf ("%d", &num);
    }while ((num < li || num > ls) && num != cierre);

    return num;
}

void sinCant (int vector [], int cantidad)
{
    int i;
    printf ("Los productos sin pedidos fueron:\n");
    for (i =0; i<100; i ++)
    {
        if (vector[i] == cantidad)
        {
            printf ("Producto nro: %d\n", i+1);
        }
    }
}
