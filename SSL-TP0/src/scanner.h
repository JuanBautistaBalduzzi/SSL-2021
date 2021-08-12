/*
 * scanner.h
 *
 *  Created on: 08/08/2021
 *      Author: Balduzzi Juan Bautista
 */

#ifndef SCANNER_H_
#define SCANNER_H_
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

enum{
   FIN_DE_TEXTO = EOF,
   IDENTIFICADOR = (int)',',
};



//version que usa la macro
void get_token();
//version que no utilizaria la macro si la saco
void get_token_simplificada();



#endif /* SCANNER_H_ */
