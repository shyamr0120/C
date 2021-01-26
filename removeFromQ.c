// Remove an entry from queue
char removeFromQ(char* queue) {
            int len = strlen(queue);
            if (len == 0) return END_OF_LIST;
 
            char* p = queue;
            char vertex = *p;
 
            int i = 0;
            for (i = 0; i < len; i++) {
                        *p = *(p + 1);
                        p++;
            }
 
            return vertex;
}
 