#include <stdio.h>

int leeyvalida (int , int);

int main()
{
float v[10]={0}, importe, s=0, prom, menor;
int vend, i, c=0, cantprom=0, b=0, vendmenor,cant=0;

printf( "Ingrese numero de vendedor entre 1 y 10 - 0 para salir\n");
vend = leeyvalida(0, 10);
while (vend !=0)
{
printf ("Ingrese Importe:  ");
  do {
     scanf ("%f", &importe);

}while ( importe <= 0);
v[vend -1]+= importe;
s+=importe; //acumulador para el promedio
c++;       // contador para el promedio
printf( "Ingrese numero de vendedor entre 1 y 10 - 0 para salir\n");
vend = leeyvalida(0, 10);

}
if (c>0)
{
     prom= s/c;
    printf ( "El promedio es %.2f", prom);

for (i=0;i<10;i++)
    {
if ( v[i] < prom)
    cantprom++;
    }
printf ( "\n La cantidad de vendedores que no superaron el promedio de facturacion es : %d", cantprom);

////////////////

for (i=0;i<10;i++)
{
    if ( v[i]!=0)
         {
        if ((b ==0)|| (v[i]< menor))
            {
             b=1;
             menor =v[i];
             vendmenor=i+1;
             }
         }

}
    printf( " \n\nVendedor con menor importe de facturacion : %d\n", vendmenor);

 }// c>0

printf( "Vendedores con ventas superiores a 300000 : \n");
cant =0;
for (i=0;i<10;i++)
{
    if ( v[i]>300000 )

       {
           cant++;
       printf( "%d\n", i+1); }
}
if (cant==0)
    printf("Ninguno\n");
return 0;

}

//DESARROLLO DE LA FUNCION
int leeyvalida (int li, int ls)
{
int x,band=0;
do {
        if (band==1)
        {
            printf ("ERROR ingrese un valor nuevamente\n");
        }
        band=1;
scanf ("%d", &x);

}while ( x < li || x > ls);
return (x);
}
