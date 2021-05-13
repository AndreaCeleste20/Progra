/*Es un programa para sacar el punto de equilibrio de un nuevo negocio*/
#include <stdio.h>
int main()
{
int i,s,f,q;
int I,S,F,E,C;
printf ("¿Hay algun ingrediente que registrar?\n");
printf ("Sí=1  No=0\n");
scanf("%d",&q);
while(q==1){
    printf ("¿Cuánto gasta en el ingrediente para una porción?\n");
    scanf("%d",&i);
    I=I+i;
    printf("La suma de los gastos de ingredientes va en: %d\n",I);
    printf("¿Hay algún otro ingrediente que registrar\n");
    printf("Sí=1 No=0\n");
    scanf("%d",&q);
    printf("\n");
    while(q>1){
        printf("ERROR, escribir 1 en caso de que haya otro ingrediente, o 0 en caso de ser no\n");
        scanf("%d",&q);
        break;
    }
}
printf("¿Tiene algún salario?\n");
printf("Sí=1 No=0");
scanf("%d",&q);
while(q==1){
    printf("¿Cuál es el salario?\n");
    scanf("%d",&s);
    S=S+s;
    printf("La suma de los salarios va en: %d\n",S);
    printf("¿Hay algun otro salario que registrar?\n");
    printf("Sí=1 No=0\n");
    scanf("%d",&q);
    printf("\n");
    while(q>1){
        printf("ERROR, escribir 1 en caso de que haya otro salario, 0 en caso de que no\n");
        scanf("%d",&q);
        break;
    }
}
}
