#include<stdio.h>
/*#include <math.h>*/
/*#include <stdlib.h>*/
/*#include<conio.h>*/
/*Crear un programa que lea los montos de Una cantidad X de periodos Durante Y años y despues los sume por año o periodo*/
void captura_datos();//Le faltaba el punto y coma al final
void suma_anios();//Le faltaba el punto y coma al final
void suma_periodos();//Le faltaba el punto y coma al final
void imprime_datos();//Le faltaba el punto y coma al final
    int a=0, p=0, aa=0, pp=0, c=0, d=0, v=0;//No declaraste las variables globales
    int s=0, t=0, e=0, f=0, q=0, r=0;/*Siempre inicializar las variables*/
/*SOLO TE VA A MARCAR UN ERROR DE LOGICA QUE AUN NO SE COMO ACOMODAR
El error es por que no esta definido el arreglo ni su contenido.
NO SE COMO SOLUCIONARLO AUN
CREO QUE SE TIENE QUE DECLAR GLOBAL PERO NO ESTOY SEGURO, POR QUE LOS VALORES QUE INGRESES EN UNA FUNCION SE DESTRUYEN AL SALIR
*/


void main ()
{
    void captura_datos()
    {

        printf("�Cuantos periodos contiene cada anio? \n");/*"i" Para columnas=Periodos*/
    scanf ("%d", &pp);
    p=pp-1;
    printf("�Cuantos anios proporcionara? \n");/*"j" Para filas=anios*/
    scanf ("%d", &aa);
    a=aa-1;

    int AniosArreglo[a];//Aqui se almacenara la suma de cada año
    int PeriodosArreglo[p];//Aqui se almacenara la suma de cada periodo

    for (p=0; p<pp; p++){//Inicia el arreglo en 0's para que no halla basura en memoria
                        PeriodosArreglo[p]=0;
                        }
    for (a=0; a<aa; a++){//Inicia el arreglo en 0's para que no halla basura en memoria
                        AniosArreglo[a]=0;
                        }

    //int DatosArreglo[p][a];//Declaro un arreglo BiDimencional de i x j tama�o
                           //El primer sub ́ındice indica la fila y el segundo sub indice indica la columna.
                           //Trabajar con Arreglos: No excederse, el compilador quizá no lo marque como error.
                           //Primero lee x=Columnas=j
                           //Segundo lee y=filas=i


    for (a=0; a <aa; a++) {
                            for (p=0; p <pp; p++) {
                                                    /*printf("------------------\n");
                                                    printf("El valor de i %d: \n ", i);
                                                    printf("El valor de j %d: \n ", j);
                                                    printf("------------------\n");*/
                                                    printf("Ingrese el valor del Anio %d: \n ", c=a+1);
                                                    printf("Ingrese el valor del Periodo %d: \n ", d=p+1);
                                                    scanf("%d",&v);
                                                    s=s+v;
                                                    t=v;
                                                    //t=t+PeriodosArreglo[j];
                                                    PeriodosArreglo[p]=PeriodosArreglo[p]+t;//suma los periodos, solo periodos, digamos todos los periodos 1 y asi
                                                  }
        AniosArreglo[a]=s;
        s=0;
                          }

printf("------------------\n");
printf("------------------\n");
    }

    void suma_anios();
    {
        for (a=0; a<aa; a++){/*for para mostrar las sumas de los ANIOS*/
                             printf("La suma del anio %d es: \n", q=a+1);
                             e=AniosArreglo[a];

                            }

    printf("------------------\n");
    printf("------------------\n");
    }

    void suma_periodos();
    {
        for (p=0; p<pp; p++){/*for para mostrar las sumas de los PERIODOS*/
                            printf("La suma del periodo %d es: \n", r=p+1);
                            d=PeriodosArreglo[p];

                            printf("------------------\n");
                            }
    }

    void imprime_datos();
    {
        printf("%d \n", e);
        printf("%d \n", d);
    }

}
