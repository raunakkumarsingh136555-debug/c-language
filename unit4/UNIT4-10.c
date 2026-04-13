#include <stdio.h>

int main()
{
    FILE *fp, *temp;
    char ch;

    fp = fopen("DATA.txt", "r");
    temp = fopen("TEMP.txt", "w");

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == 'a')
            fputc('x', temp);
        else
            fputc(ch, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("DATA.txt");
    rename("TEMP.txt", "DATA.txt");

    return 0;
}
