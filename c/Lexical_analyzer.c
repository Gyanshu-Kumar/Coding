#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool isValidOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == '>' || ch == '<' ||
        ch == '=')
        return true;
    return false;
}

bool isValidDelimiter(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' || ch == '>' || ch == '<' ||
        ch == '=' || ch == '/' || ch == '?'|| 
        ch == ';' || ch == '(' || ch == ')'|| 
        ch == ']' || ch == '[' || ch == '{' || 
        ch == '}'|| ch == ',' || ch == ' ')
        return true;
    return false;
}

bool isValidIdentifier(char *str)
{
    if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
        str[0] == '3' || str[0] == '4' || str[0] == '5' ||
        str[0] == '6' || str[0] == '7' || str[0] == '8' ||
        str[0] == '9' || isValidDelimiter(str[0]) == true)
        return false;
    return true;
}

bool isValidKeyword(char *str)
{
    if (!strcmp(str, "if") || !strcmp(str, "else") || !strcmp(str, "while") || !strcmp(str, "do") ||
        !strcmp(str, "break") || !strcmp(str, "continue") || !strcmp(str, "int") ||
        !strcmp(str, "double") || !strcmp(str, "float") || !strcmp(str, "return") ||
        !strcmp(str, "char") || !strcmp(str, "case") || !strcmp(str, "sizeof") ||
        !strcmp(str, "long") || !strcmp(str, "short") || !strcmp(str, "typedef") ||
        !strcmp(str, "switch") || !strcmp(str, "unsigned") || !strcmp(str, "void") ||
        !strcmp(str, "static") || !strcmp(str, "struct") || !strcmp(str, "goto"))
        return true;
    return false;
}


int main()
{
    char identifier[] = "{";
    char keyword[] = "if";
    char operatorChar = '+';
    int c = 0;
    if (isValidIdentifier(identifier))
    {
        printf("%s is a valid identifier.\n", identifier);
        c++;
    }
    else
    {
        printf("%s is not a valid identifier.\n", identifier);
        c++;
    }

    if (isValidKeyword(keyword))
    {
        printf("%s is a valid keyword.\n", keyword);
        c++;
    }
    else
    {
        printf("%s is not a valid keyword.\n", keyword);
        c++;
    }

    if (isValidOperator(operatorChar))
    {
        printf("%c is a valid operator.\n", operatorChar);
        c++;
    }
    else
    {
        printf("%c is not a valid operator.\n", operatorChar);
    }

printf("Total number of tokens are : %d",c);
    return 0;
}
