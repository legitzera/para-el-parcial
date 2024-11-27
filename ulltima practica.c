#include <stdio.h>

//PROTOTIPOS
int validar (int, int, int);
void sinCant (int [], int);

//BLOQUE PRINCIPAL
int main ()
{
    int i, producto, cantidad, suma_cantidad = 0, pedidos = 0, v [100] = {0};
    float promedio;

    printf ("Ingrese el codigo del producto, entre 1 y 100 (0 para finalizar): ");
    producto = validar (0, 100, 0);

    while (producto != 0)
    {
        printf ("Ingrese la cantidad de unidades: ");
        scanf ("%d", &cantidad);

        v[producto - 1] += cantidad;
        suma_cantidad += cantidad;
        pedidos ++;

        printf ("Ingrese el codigo del producto, entre 1 y 100 (0 para finalizar): ");
        producto = validar (0, 100, 0);
    }

    if (pedidos > 0)
    {
        promedio = (float)suma_cantidad / pedidos;
    }

    printf ("\nProductos del codigo 50 a 100 (CODIGO - CANTIDAD):\n");
    for (i = 49; i < 100; i++)
    {
        printf ("%d - %d\n", i + 1, v[i]);
    }

    printf ("\nLos productos que superaron el promedio total de unidades pedidas son:\n");
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

void sinCant (int vector[], int cantidad)
{
    int i;

    printf ("\nLos codigos de productos sin unidades son:\n");
    for (i = 0; i < 100; i ++)
    {
        if (vector[i] == cantidad)
        {
            printf ("Producto nro: %d\n", i + 1);
        }
    }
}
