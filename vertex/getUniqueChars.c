char* getUniqueChars(char* fileName) {
   FILE* fp;
   char* characters = NULL;
 
   characters = malloc(1);
   characters[0] = '\0';
 
   fp = fopen (fileName, "r");
 
   while(1) {
      char c = nextChar(fp);
      if (feof(fp)) break;
      characters = addCharacter(characters, c);
   }
 
   fclose(fp);
 
   return characters;
}