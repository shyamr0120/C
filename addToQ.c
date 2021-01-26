// Add an entry to Queue
void addToQ(char* queue, char vertex) {
            char* p = queue;
            p = p + strlen(queue);
            *p = vertex;
            p++;
            *p = END_OF_LIST;
}