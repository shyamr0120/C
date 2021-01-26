/* Forward declaration */
struct EDGETAG;
 
 
typedef struct
{
    char c;
    int  isVisited;
    struct EDGETAG* p;
} VERTEX;
 
 
typedef struct EDGETAG
{
    VERTEX* v;
    struct EDGETAG* q;
} EDGE;
 
 
 
char* getUniqueChars(char* fileName);
char  nextChar(FILE *fp);
char* addCharacter(char* characters , char c);
VERTEX* buildVertices(char* characters);