#include <stdio.h>

struct emp
{
    int empcode;
    char empname[50];
    float salary;
};

int main()
{
    FILE *fp;
    struct emp e;
    int n, i;

    fp = fopen("EMP.dat", "wb");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter EmpCode: ");
        scanf("%d", &e.empcode);

        printf("Enter EmpName: ");
        scanf("%s", e.empname);

        printf("Enter Salary: ");
        scanf("%f", &e.salary);

        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    fp = fopen("EMP.dat", "rb");

    printf("\nEmployee Records:\n");

    while(fread(&e, sizeof(e), 1, fp))
    {
        printf("Code: %d\tName: %s\tSalary: %.2f\n",
               e.empcode, e.empname, e.salary);
    }

    fclose(fp);

    return 0;
}
