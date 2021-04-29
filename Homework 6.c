/*No logrè haecer todo, hice hasta donde entendì, fue con ayuda de Rulgamer :(*/
#include <stdio.h>
#include <string.h> // strstr
#include <stdlib.h> // malloc & free
#include <ctype.h> // isspace & tolower
#include "arbol.h"

node* insert(char* u, char* c, node* pos, int d) {
  node* temp;
  if (pos == NULL) {
    pos = (node*)malloc(sizeof(node));
    pos->usuario = u;
    pos->contrasena = c;
    pos->depth = d;
    printf ("Se ha registrado al usuario <%s> con la contraseña <%s>\n\n", u, p);
   
  } else {
    if (strcmp(pos->usuario, u) == 0) {
      if (pos->contrasena!=NULL){
      printf("Este usuario ya estaba registrado\n\n");
      }
      else{
          pos->contrasena = c;
          printf ("Se ha registrado al usuario <%s> con la contraseña <%s>\n\n", u, p);
      }
    } else if (strcmp(pos->usuario, u)>0) { 
      temp = insert(u, c, pos->leftChild, d + 1);
      if (pos->leftChild == NULL) {
	pos->leftChild = temp;
      }
    } else if (strcmp(pos->usuario, u)<0){
      temp = insert(u, c, pos->rightChild, d + 1); 
      if (pos->rightChild == NULL) {
	pos->rightChild = temp;
      }
    }
  }
  return pos;
}
