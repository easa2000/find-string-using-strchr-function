// strrchr()
#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    char ch;
    char *result;

    printf("\n Enter the String : ");
    gets(name);
    printf("\n Enter the character: ");
    ch = getchar();
    result = strrchr(name,ch);
    printf("\n Original String: ");
    puts(name);
    printf("\n first occurrence of the given character: ");
    puts(result);
}
