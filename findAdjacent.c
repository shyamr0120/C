VERTEX* findAdjacent(VERTEX* vertex) {
 
            //printf("Inside FindAdj ... %c  \n", vertex->c);
 
            EDGE* edge = vertex->p;
            // Has no more neighbor ... exit
            if (edge == NULL) {
                        //printf("No unvisited neighbor ...\n");
                        return (VERTEX*)NULL;
            }
 
            while (edge != NULL) {
                        //printf("Checking Neighbor %c \n", edge->v->c);
 
                        if (edge->v->isVisited == 0) {
                                    return edge->v;
                        }
 
                        edge = edge->q;
            }
 
            //printf("No unvisited neighbor ...\n");
            return (VERTEX*)NULL;
 
}