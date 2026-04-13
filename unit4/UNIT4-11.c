#include <stdio.h>

int main()
{
    FILE *fp;
    long size;

    fp = fopen("DATA.txt", "r");

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    fclose(fp);

    printf("File Size = %ld bytes", size);

    return 0;
}
