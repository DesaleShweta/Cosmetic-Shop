/**
 * C program to check alphabet, digit or special character
 */

#include <stdio.h>

int main()
{
    char ch;

    
    printf("Enter any character: ");
    scanf("%c", &ch);


    
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
		ch=ch+32;
		
		if(ch>='a'&&ch<='z')
  {
   printf("\n You have entered Lower case letter =%c",ch);
   ch = ch - 32 ;
   printf("\n The Upper case letter is =%c",ch);
  }
 
else if(ch>='A' && ch<='Z')
{
   printf("\n You have entered Upper case letter");
   ch = ch + 32 ;
   printf("\n The Lower case letter is =%c",ch);
}
	cout<<"character in lowercase = "<<ch;
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
		
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}