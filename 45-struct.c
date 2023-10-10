#include <stdio.h>
#include <string.h>

/**
 * main - start
 *
 * Description - Struct for house tenants
 *
 */

struct Tenants
{
    char name[50];
    char nationality[10];
    char career[50];
    int family_num;
    int tenancy_code;
    double amount_due;
};


int main()
{
    struct Tenants T1;
    strcpy(T1.name, "John Noble");
    strcpy(T1.nationality, "Nigeria");
    strcpy(T1.career, "Trader");
    T1.family_num = 7;
    T1.tenancy_code = 2345;
    T1.amount_due = 100.00;

    printf("Tenants data include;\n");
    printf("Name: %s\n", T1.name);
    printf("Nationality: %s\n", T1.nationality);
    printf("Occupation: %s\n", T1.career);
    printf("Family head count: %d\n", T1.family_num);
    printf("Code: %d\n", T1.tenancy_code);
    printf("Amount due: %6.2f\n", T1.amount_due);

    return (0);
}
