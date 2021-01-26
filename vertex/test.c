#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include "header.h"
#include "getUniqueChars.c"
#include "nextChar.c"
#include "addCharacter.c"
#include "buildVertices.c"
 
int main ( int argc, char *argv[] ) {
 
   char* characters =  getUniqueChars(argv[1]);
 
   VERTEX* vertices = buildVertices(characters);
 
   VERTEX* p = vertices;
   int i=0;
   for(i=0; i<strlen(characters); i++) {
               printf("%c \n", p->c);
               p++;
   }
 
   return(0);
}