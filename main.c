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
#include "dfs.c"
#include "findAdjacent.c"
#include "push.c"
#include "pop.c"
 
int main ( int argc, char *argv[] ) {
 
   char* characters =  getUniqueChars(argv[1]);
 
   VERTEX* vertices = buildVertices(characters);
 
   buildAdjacentList(vertices, argv[1]);
 
   printf("Adjacent List:\n");
   printAdjacentList(vertices);
 
   printf("\n\nDepth First:\n");
   dfs(vertices);
 
   printf("\n\n*** End ***\n");
 
   return(0);
}