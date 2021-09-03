/*
 ============================================================================
 Name        : SSL-TP0.c
 Author      : Balduzzi Juan Bautista
 Version     : 0.1
 Copyright   : Your copyright notice
 Description : get_token, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"


int main(void) {
   int token=get_token();

   while(token!= FIN_DE_TEXTO)
   {
      switch(token)
      {
      case CADENA:;
         printf("Cadena: %s \n",lexemaLeido);
         break;
      case IDENTIFICADOR:
      {
         printf("Separador: , \n");
         break;
      }
      default:
         break;
     }
      token= get_token();
   }
	printf("Fin de Texto \n");
	return EXIT_SUCCESS;
}
