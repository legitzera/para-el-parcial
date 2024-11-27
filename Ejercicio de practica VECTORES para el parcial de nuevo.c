//PROTOTIPOS
int validar (int, int, int);
void nosuperaron (int[], int, float);

//BLOQUE PRINCIPAL
int main ()
{
    int vendedor, band = 0, i, cantidad = 0 , cant_sin = 0, vend_menor, cant_superior = 0, v[10] = {0};
    float importe = 0, suma = 0, menor, promedio;

    printf ("Ingrese el codigo del vendedor del 1 al 100 (0 para finalizar): ");
    vendedor = validar (1, 100, 0);

    while (vendedor != 0)
    {
        printf ("Ingrese importe: ");
        do
        {
            scanf ("%f", &importe);
        }while (importe <= 0);

        v[vendedor - 1] += importe;
        suma += importe;
        cantidad ++;
        printf ("Ingrese el codigo del vendedor del 1 al 100 (0 para finalizar): ");
        vendedor = validar (1, 100, 0);
    }

    if (cantidad > 0)
    {
        promedio = suma / cantidad;

        nosuperaron (v, cantidad, promedio);

        for (i = 0; i < 10; i ++)
        {
            if (v[i] != 0)
            {
                if (band == 0 || (v[i] < menor))
                {
                    band = 1;
                    menor = v[i];
                    vend_menor = i+1;
                }
            }
        }

        printf ("El vendedor con menor importe de facturacion es: %d\n", vend_menor);
    }

    printf ("Vendedores con ventas mayores a $300.000: \n");
    for (i = 0; i < 10; i++)
    {
        if (v[i] > 300000)
        {
            cant_superior ++;
            printf ("%d\n", i + 1);
        }
    }

    if (cant_superior == 0)
    {
        printf ("Ninguno.");
    }

    return 0;
}

//DESARROLLO DE FUNCIONES
int validar (int li, int ls, int cierre)
{
    int vendedor, band = 0;

    do
    {
        if (band == 1)
        {
            printf ("Numero incorrecto, intente de nuevo: ");
        }
        band = 1;
        scanf ("%d", &vendedor);
    }while ((vendedor < li || vendedor > ls) && vendedor != cierre);

    return vendedor;
}

void nosuperaron (int vector [], int cantidad, float promedio)
{
    int i;

    for (i = 0; i < 10; i ++)
    {
        if (vector[i] > promedio)
            {
                cantidad ++;
                printf ("La cantidad de vendedores que no superaron el promedio es: %d\n", i);
            }
    }
}
