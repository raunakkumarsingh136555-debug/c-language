#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int upper = 0, lower = 0, digits = 0, special = 0, vowels = 0;

    fp = fopen("DATA.txt", "r");

    while((ch = fgetc(fp)) != EOF)
    {
        if(isupper(ch))
            upper++;
        else if(islower(ch))
            lower++;
        else if(isdigit(ch))
            digits++;
        else if(ch!=' ' && ch!='\n')
            special++;

        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowels++;
    }

    fclose(fp);

    printf("Uppercase Letters: %d\n", upper);
    printf("Lowercase Letters: %d\n", lower);
    printf("Digits: %d\n", digits);
    printf("Special Symbols: %d\n", special);
    printf("Vowels: %d\n", vowels);

    return 0;
}
