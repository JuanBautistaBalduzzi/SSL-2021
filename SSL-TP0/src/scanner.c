/*
S* scanner.c
 *
 *  Created on: 08/08/2021
 *      Author: Balduzzi Juan Bautista
 */
#include "scanner.h"


void get_token()
{
   while(1)
   {
      int caracter_leido=getchar();

      switch (caracter_leido) {
         case IDENTIFICADOR:
            printf("\nIdentificador: %c ",(char)caracter_leido);

            break;
         case FIN_DE_TEXTO:
            printf("\nFin De Texto: ");
            return;

         default:
            if(!isspace((char)caracter_leido))
            {
               printf("\nCadena: %c",(char)caracter_leido);
                caracter_leido=getchar();
               while(caracter_leido!=IDENTIFICADOR && caracter_leido!=FIN_DE_TEXTO
                     && !(isspace((char)caracter_leido)))
                     {
                       printf("%c",(char)caracter_leido);
                       caracter_leido=getchar();
                     }
               if(!isspace((char)caracter_leido))
                  continue;
            }
            break;
      }

   }

}


