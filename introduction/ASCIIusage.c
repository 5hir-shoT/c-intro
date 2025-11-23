#include <stdio.h> 
int main() 
{ 
    char c; 
    printf("Enter the value= "); 
    scanf("%c",&c); 

    if(c>=48 && c<=57)
    { 
        printf("Digit or Number\n");
    } 
    else if((c>=65 && c <=90) || (c>=97 && c<=122))
    {
        printf("Alphabet");
    }
    else 
    {
        printf("Other \n");
    }
    return 0; 
}

/*

Output:

Enter the value= 1
Digit or Number

Enter the value= a
Alphabet

Enter the value= A
Alphabet

Enter the value= /
Other

NOTE: A-Z = 65 to 90
      a-z = 97 to 122
      0-9 = 48 to 57

*/