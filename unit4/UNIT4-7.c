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
    struct emp e, max;
    int n, i;

    fp = fopen("EMP.txt", "w");

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

    fp = fopen("EMP.txt", "r");

    fread(&max, sizeof(max), 1, fp);

    while(fread(&e, sizeof(e), 1, fp))
    {
        if(e.salary > max.salary)
        {
            max = e;
        }
    }

    fclose(fp);

    printf("\nEmployee with Highest Salary:\n");
    printf("Code: %d\nName: %s\nSalary: %.2f\n",
           max.empcode, max.empname, max.salary);

    return 0;
}
