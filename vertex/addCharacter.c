char * addCharacter(char* charcaters, char c) {
            // See if the character is already in the list
            char *p = strchr(charcaters, c);
            if (p != NULL) return charcaters;        // already known charcater
 
            // Append the character to the list of characters ...
            size_t len = strlen(charcaters);
            p = malloc(len + 1 + 1);
            strcpy(p, charcaters);
            p[len] = c;
            p[len + 1] = '\0';
            free( charcaters ) ;
            return p;
}
