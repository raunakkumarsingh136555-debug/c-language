#include <stdio.h>

int main() {
    FILE *fp;
    char text[100], ch;

    fp = fopen("test.txt", "w");

    if (fp == NULL) {
      printf("File cannot be opened!");
       return 1;
    }

    printf("Enter text to write in file:\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    fp = fopen("test.txt", "r");

    if (fp == NULL) {
    printf("File cannot be opened!");
    return 1;
    }

    printf("\nContent of file:\n");

    while ((ch = fgetc(fp)) != EOF) {
    printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
