/*
S* scanner.c
 *
 *  Created on: 08/08/2021
 *      Author: Balduzzi Juan Bautista
 */
#include "scanner.h"



int get_token()
{
      int caracter_leido=getchar();

      switch (caracter_leido) {

      case IDENTIFICADOR:
            return IDENTIFICADOR;

            break;
         case FIN_DE_TEXTO:;
            return FIN_DE_TEXTO;

         default:
            if(!isspace((char)caracter_leido))
            {
               int i=0;
               lexemaLeido[i]= caracter_leido;
               caracter_leido=getchar();
               while(caracter_leido != IDENTIFICADOR && caracter_leido != IDENTIFICADOR
                     && !isspace((char)caracter_leido))
               {
                  i++;
                  lexemaLeido[i]= caracter_leido;
                  caracter_leido=getchar();
               }
               i++;
               lexemaLeido[i]='\0';
               ungetc(caracter_leido,stdin);
               return CADENA;
            }
            return -20;
      }

}



