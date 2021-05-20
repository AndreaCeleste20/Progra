#include <stdio.h>
#include "Datos.h"
#include "Operaciones.h"
int C; /* Suma de costos */
int S; /* Suma de salarios */
int F; /* Suma de gastos fijos */
int p; /* Precio*/
int k, j,l; /* variables para operacion*/

int main()
{
    printf("Hi! This is a program that will help you to know the breakeven of you commerce\n");
   
   /*Ingredientes*/
   
    a= "ingredients";
    b= "cost of ingredient";
    z= " per portion";
    REGISTRO (h);
    C=H;
    printf ("The cost of the ingredients is $%d\n\n",C);
    
    /*Salarios*/
    
    a= "salaries";
    b= "salarie";
    z=" per month";
    REGISTRO(h);
    S=H;
    printf ("The sum of the salaries is $%d\n\n",S);
    
    /* Gastos Fijos */
    
    a="fixed expenses (like electricity, water, etc";
    b= "fixed expense";
    z= " per month";
    REGISTRO (h);
    F=H;
    printf ("The cost of the fixed expenses is $%d\n\n", F);
    
    /*Costo por porcion*/
    
    printf("Which will be the cost per portion? ");
    scanf("%d",&p);
    k=p-C;
    j=F+S;
    l=j/k;      /*Calculos del punto de equilibrio*/
    printf("\n");
    printf("You will have to sold %d portions at month\n",l);
}

