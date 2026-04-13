#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int num, rev = 0, rem;

    fp1 = fopen("NUM.txt", "w");
    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(fp1, "%d", num);
    fclose(fp1);

    fp1 = fopen("NUM.txt", "r");
    fscanf(fp1, "%d", &num);
    fclose(fp1);

    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    fp2 = fopen("REV.txt", "w");
    fprintf(fp2, "%d", rev);
    fclose(fp2);

    return 0;
}
