#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char string[50];
char *s;
int numberC = 0,consonantC = 0,vowelC = 0;

printf("Enter data : ");
fgets(string,50,stdin);
string[strlen(string) - 1] = '\0';
fflush(stdin);

s = string;
while(*s)
{ 
    if(*s == '\0')break;
    if(*s >= '0' && *s <= '9')numberC++;
    else if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' ||*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U')vowelC++;
    else if(*s != 'a' && *s != 'e' && *s !='o' && *s != 'u' && *s != 'i' && *s != 'A' || *s != 'E' || *s != 'I' || *s != 'O' || *s != 'U')consonantC++; 
    else
    { 
    s++;
    continue;
    }
    s++;
}

printf("Number of consonants  are : %d\n",consonantC);
printf("Number of digits are : %d\n",numberC);
printf("Number of vowels are : %d\n",vowelC);
}
