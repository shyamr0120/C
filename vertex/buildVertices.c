VERTEX* buildVertices(char* characters) {
            int len = strlen(characters);
 
            VERTEX* vertices = (VERTEX*)malloc((len+1) * sizeof(VERTEX));
 
            int i;
            VERTEX* vertex =  vertices;
 
            for(i=0; i<len; i++) {
                        vertex->c          = characters[i];
                        vertex->isVisited  = 0;
                        vertex->p          = NULL;
                        vertex++;
            }
 
            vertex = NULL;
 
            return vertices;
}
