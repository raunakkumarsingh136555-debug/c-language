#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("DATA.txt", "r");

    if(fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    // Move to 5th position
    fseek(fp, 5, SEEK_SET);
    printf("Position after fseek: %ld\n", ftell(fp));

    ch = fgetc(fp);
    printf("Character at position 5: %c\n", ch);

    // Move to end
    fseek(fp, 0, SEEK_END);
    printf("Position at end: %ld\n", ftell(fp));

    // Move back to beginning
    rewind(fp);
    printf("Position after rewind: %ld\n", ftell(fp));

    fclose(fp);

    return 0;
}
