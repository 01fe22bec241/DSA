/*Vowels and consonants*/
#include<stdio.h>
#include<ctype.h>
int main()
{
 char c;
 printf("Enter a character\n");
 scanf("%c",&c);
 if(isalpha(c))
  {
   switch(c)
   {
   case 'A':
   case 'a':
   case 'E':
   case 'e':
   case 'I':
   case 'i':
   case 'O':
   case 'o':
   case 'U':
   case 'u':printf("Vowel");
            break;
   default:printf("Consonants\n");
    }//end of switch
  }//end of if
  else
   printf("Invalid input");
 return 0;
 }
