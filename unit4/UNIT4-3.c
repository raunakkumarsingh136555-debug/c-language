#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");

    if (fp1 == NULL) {
    printf("Source file not found!");
    } else {

    fp2 = fopen("target.txt", "w");

    if (fp2 == NULL) {
    printf("Cannot create target file!");
    } else {

    while ((ch = fgetc(fp1)) != EOF) {
    fputc(ch, fp2);
            }

    printf("File copied successfully!");
    fclose(fp2);
    }

    fclose(fp1);
    }

    return 0;
}
