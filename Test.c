#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include "header.h"
#include "getUniqueChars.c"
#include "nextChar.c"
#include "addCharacter.c"
#include "buildVertices.c"
#include "buildAdjacentList.c"
#include "printAdjacentList.c"
#include "getVertex.c"
#include "attachEdge.c"
#include "depthfirstsearch.c"
#include "dfs.c"
#include "do_dfs.c"
 
int main ( int argc, char *argv[] ) {
 
   char* characters =  getUniqueChars(argv[1]);
 
   VERTEX* vertices = buildVertices(characters);
 
   buildAdjacentList(vertices, argv[1]);
 
   printAdjacentList(vertices);
   
   dfs(vertices);
 
   return(0);
}