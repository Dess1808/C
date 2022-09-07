#include<stdio.h>
#include<cs50.h>
#include <ctype.h>


int main(void)
{
   char ch;
   char chUpper;

   do
   {
      ch = get_char("ch: ");
      chUpper = toupper(ch);
   } 
   while (chUpper != 'X' && chUpper != 'O');  
}