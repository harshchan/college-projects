#include <stdio.h> 
#include <stdlib.h> 
  
int main(int argc,char *argv[]) 
{ 
   FILE *fp1 = fopen(argv[1], "r"); 
   FILE *fp2 = fopen(argv[2], "r"); 
  
    
   FILE *fp3 = fopen(argv[3], "w"); 
   char c; 
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL) 
   { puts("Could not open files"); 
         exit(0); } 
  
   
   while ((c = fgetc(fp1)) != EOF) 
      fputc(c, fp3); 
  
   
   while ((c = fgetc(fp2)) != EOF) 
      fputc(c, fp3); 
  
   printf("Merged file1 and file2 into file3"); 
  
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
   return 0; 
} 
