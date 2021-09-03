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
   CADENA,
};




int get_token();




#endif /* SCANNER_H_ */
