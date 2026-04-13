#include <stdio.h>

int main()
{
    FILE *fp, *odd, *even;
    int i, num;

    fp = fopen("DATA.txt", "w");
    for(i = 1; i <= 10; i++)
    {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);

    fp = fopen("DATA.txt", "r");
    odd = fopen("ODD.txt", "w");
    even = fopen("EVEN.txt", "w");

    while(fscanf(fp, "%d", &num) != EOF)
    {
        if(num % 2 == 0)
            fprintf(even, "%d\n", num);
        else
            fprintf(odd, "%d\n", num);
    }

    fclose(fp);
    fclose(odd);
    fclose(even);

    return 0;
}
