#include<stdio.h>
struct employee
{
    char employeeemailid[30];
    char employeename[30];
    char employeeaddress[50];
    int employeesalary;
};
int main()
{
    int count=0,num;
    printf("ENTER NO. OF EMPLOYEES: ");
    scanf("%d",&num);
    struct  employee employee[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter Email id of the employee %d: ",i+1);
        scanf("%s",employee[i].employeeemailid);
        printf("Enter Name of the employee %d: ",i+1);
        scanf("%s",employee[i].employeename);
        printf("Enter the address of the employee %d: ",i+1);
        scanf("%s",employee[i].employeeaddress);
        printf("Enter the salary of the employee %d: ",i+1);
        scanf("%d",&employee[i].employeesalary);
        if(employee[i].employeesalary>50000)
            count++;
    }
    printf("%d employees have salaray greater than 50k",count);
    return 0;
}