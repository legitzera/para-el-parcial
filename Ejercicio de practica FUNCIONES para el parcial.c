#include<stdio.h>
int leeyvalida(int, int, int);
int negativo(int);
float promedio (int, int);
void imprimemenor(int,int);

int main()
{
int numero,suma=0,cantidad=0,suma_positivos=0, suma_negativos=0,cantidad_positivos=0, cantidad_negativos=0;
int band=0;
int menor,posicion_menor,posicion=1;

printf("Ingrese Numero (-50,50) Presione (-100) para finalizar:");
numero=leeyvalida(-50,50,-100);
 while (numero!=-100)
{
    if (band=0||menor>numero)
    {
        band=1;
        menor=numero;
        posicion_menor=posicion;
    }
     if (negativo(numero))
    {
        cantidad_negativos++;
     suma_negativos+=numero;
    }
     else
    {
        suma_positivos+=numero;
        cantidad_positivos++;
    }
    posicion++;
    printf("Ingrese Numero (-50,50) Presione (-100) para finalizar:");
    numero=leeyvalida(-50,50,-100);
}
   suma=suma_positivos+suma_negativos;
   cantidad=cantidad_negativos+cantidad_positivos;
   printf("El promedio de los positivos es %.2f",promedio(suma_positivos,cantidad_positivos));
  imprimemenor(menor,posicion_menor);
  printf("\nEl promedio de todos los numeros es %.2f",promedio(suma,cantidad));
  printf("\nLa cantidad de negativos %d",cantidad_negativos);


  return 0;
}
    ///////////////////FUNCIONES
 int leeyvalida(int li, int ls, int cierre)
{
    int x,band=0;
    do{
        if (band==1)
            printf("Error. Ingrese nuevamente el dato.");
        band=1;
        scanf("%d",&x);
        }while ((x<li || x>ls) && (x!=cierre));
return x;
}
 int negativo(int numero)
{ int retorno=0;
     if (numero<0)
        retorno =1;
   return retorno;
 }
 float promedio(suma,cantidad)
{
  float prom=0;
    if (cantidad>0)
       prom=(float)suma/cantidad;
    return prom;
}
void imprimemenor(int menor,int posicion)
{
    printf("\n El menor valor es %d en la posicion %d",menor,posicion);
}
