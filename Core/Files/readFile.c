/* Read a Text File */
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
   char ch, file_name[] = "lyrics.txt";
   FILE *fp;
 
   fp = fopen(file_name, "r"); 
 
   if (fp == NULL) {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 
   printf("The contents of %s file:\n", file_name);
 
   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
 
   fclose(fp);
   
   return;
}