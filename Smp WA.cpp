#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define max 500                  
	
int men[max][max],women[max][max],menMark[max];
int womencount[max],mencount[max];
                        
int women_Prefer_men_over_men1(int w,int m,int m1,int n)    
{
    int i;
      for(i=1;i<=n;i++)
      {
             if(women[w][i]==m)
             	return 1;
             else if(women[w][i]==m1)
                 return 0;
        }
}

void stablemarriage(int n)                
{
      int i,m,m1,w,freecount;                
      for(i=1;i<=max;i++)
      {
            menMark[i]=0;    
            womencount[i]=-1;        
      }
      freecount=n;                    
     while(freecount>0)                
     {
           for(m=1;m<=n;m++)
                for(i=1;i<=n&&menMark[m]==0;i++)
                {
                       w=men[m][i];         
                      if(womencount[w]==-1)        
                      {
                        womencount[w]=m;    
                        menMark[m]=1;        
                        freecount--;        
                      }
                      else            
                      {
                         m1=womencount[w];
                         if(women_Prefer_men_over_men1(w,m,m1,n))
                        {
                           womencount[w]=m;     
                           menMark[m]=1;    
                           menMark[m1]=0;    
                            }
                       }
                 }
     }
}

int main()                
{
     int n,t,i,j;
    printf("Enter how many men or women : ");
    scanf("%d",&n);            
    printf("Enter women preference list:\n");
    for(i=1;i<=n;i++)    
    {
        for(j=1;j<=n;j++)
           {
            printf("Enter  %d preference of women %d\n",j,i);
                  scanf("%d",&women[i][j]);
            }
    }
    printf("\n");
    printf("Enter men preference list:\n");
    for(i=1;i<=n;i++)    
    {
          for(j=1;j<=n;j++)
           {
            printf("Enter %d preference of men %d\n",j,i);
                  scanf("%d",&men[i][j]);
            }
    }
    printf("\n");
    printf("Women preference list:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d-->\t",i);
          for(j=1;j<=n;j++)
           {
                  printf("%d\t",women[i][j]);
            }
        printf("\n");
    }    
    printf("\n");
    printf("Men preference list:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d-->\t",i);
          for(j=1;j<=n;j++)
           { 
                  printf("%d\t",men[i][j]);
            }
        printf("\n");
    }
    printf("\n");
    stablemarriage(n);                

    for(i=1;i<=n;i++)        
    {
          mencount[womencount[i]]=i;
    }

    printf("Stable Pairs are :\n");    
    for(i=1;i<=n;i++)
    {
         printf("(%d and %d)\n",i,mencount[i]);   
    }
    printf("\n");
    return 0;
}
