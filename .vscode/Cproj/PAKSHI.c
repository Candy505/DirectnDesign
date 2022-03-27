#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()

{
   int gear[6] ={0,1,2,3,4,5} ;
   char *d[8] = { "SW","W","NW" ,"N","NE","E","SE","S "};
   int static i=3;
   int static j=0;
   int l,k;
   char c;
   char *ptr = (char*) malloc(100*sizeof(char));


   printf("Enter direction string\n");
   scanf("%s",ptr);

   l= strlen(ptr);
   
   ptr = (char *) realloc(ptr,(l+1)*sizeof(char));

 printf("(%s | %d) ",*(d+3),*(gear+0));


  for(k=0;k<l;k++)
  {
     c = *(ptr+k);
    // printf("%c\n",c);
    
    
    if(!(k==l-1))
   {
       printf("=>");
   }
    if(c == 'L')
        {
          if(i==0)
          {
              i=7;
          }

          else
          {
              --i;
          }

        }
      

    else if(c == 'R')
    {
           if(i==7)
           {
            i=0;

           }
           else
           {
    
          ++i;

           }
    }

  
   else if(c == 'A')
        {
          if(j==5)
          {
             j=-6;
          }

          else
          {
              ++j;
          }
        }

    else if(c == 'B')
    {
      if(j==0)
      {
         j=-1 ;
      }
      
      else
      {
          --j;

      }

    }

   if(!(c=='A'&& j== -6 || c == 'B' && j== -1))  //0
   {

   printf("(%s | %d) ",*(d+i),*(gear+j));
      
   
   }

  }

    return 0;
}