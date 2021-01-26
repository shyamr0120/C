char nextChar(FILE *fp) {
   while(1) {
      char c = fgetc(fp);
      if (feof(fp)) break;
      if (c != ' ' && c != '\n') return c;
   }
}