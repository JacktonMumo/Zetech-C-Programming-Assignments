#include <stdio.h>
#include <string.h>

struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
};

int main(){
	struct employee emp;
	
	strcpy(emp.name, "John Doe");
	emp.id =334334;
	strcpy(emp.department, "Human Resources");
	emp.salary = 50000.75;
	strcpy(emp.email, "john.doe@company.com");
	
	printf("Name: %s\n", emp.name);
	printf("ID: %d\n", emp.id);
	printf("Department: %s\n", emp.department);
	printf("Salary: %.2f\n", emp.salary);
	printf("Email: %s\n", emp.email);
	
	return 0;
}