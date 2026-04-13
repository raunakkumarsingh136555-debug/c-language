#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp1, *fp2;
    char str[100];
    int i, len;

    fp1 = fopen("greencity.txt", "w");

    if (fp1 == NULL) {
    printf("Error opening greencity.txt");
    } else {
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp1);
    fclose(fp1);
    }

    fp1 = fopen("greencity.txt", "r");
    fp2 = fopen("cleancity.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
    printf("Error opening file!");
    } else {

    fgets(str, sizeof(str), fp1);
    len = strlen(str);

    if (str[len - 1] == '\n') {
    str[len - 1] = '\0';
    len--;
    }

    for (i = len - 1; i >= 0; i--) {
    fputc(str[i], fp2);
    }

    printf("Reversed content written to cleancity.txt");

    fclose(fp1);
    fclose(fp2);
    }

    return 0;
}
