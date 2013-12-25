#include<stdio.h>
#include<string.h>
 
void reverse(char*);
 
int main() 
{
   char str[100];
 
   printf("Enter a string\n");
   gets(str);
 
   reverse(str);
 
   printf("Reverse of entered string is \"%s\".\n", str);
   getch();
   return 0;
}
 
void reverse(char *str) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = strlen(str);

   begin = str;
   end = str;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
      
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      temp = *end;
      *end = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
