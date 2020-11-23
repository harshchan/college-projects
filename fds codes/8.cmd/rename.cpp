#include<stdio.h> 
#include<string.h>
  
int main(int argc,char *argv[]) 
{ 
    
     
    int name; 
  
     
    name= rename(argv[1], argv[2]); 
  
     
    if(!name) 
    { 
        printf("%s", "File name changed successfully"); 
    } 
    else
    { 
        perror("Error"); 
    } 
    return 0; 
} 
