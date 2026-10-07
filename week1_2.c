//2.	Define the structure of an employee with 
//members Name, Age, and Salary. Write a program in C
// to create an array of such employee records and 
//display details of employee with highest salary.

#include<stdio.h>

struct employee {
    char name[50];
    int age;
    int salary;
};
int main(){
    struct employee e[100];
    int n,i,max;

    printf("enter no. of employees");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("employee %d",i+1);
        printf("enter naame:");
        scanf("%s",e[i].name);
        printf("enter age");
        scanf("%d",&e[i].age);
        printf("enter salary");
        scanf("%f",&e[i].salary);
    }
    max=0;
    for(i=1;i<n;i++)
    {
        if(e[i].salary>e[max].salary)
        {
            max=i;
        }

    }
    printf("employee with highest salary");
    printf("name: %s",e[max].name);
    printf("age: %d",e[max].age);
    printf("salary: %2f",e[max].salary);

    return 0;

}
