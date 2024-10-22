// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct student{
    char name[10];
    char reg_no[15];
    char email[15];
    int ID ,phone_no;
    float marks;
}student1,student2;
    int main() {
        strcpy(student1.name, "Jack");
        strcpy(student1.reg_no, "Jack");
        strcpy(student1.email, "Jack@gmail");
        student1.ID =33534545;
        student1.phone_no =434535254;
        student1.marks =443;
    
    printf("Name: %s \n",student1.name);
    printf("registration number: %s \n",student1.reg_no);
    printf("Email: %s \n",student1.email);
    printf("ID: %d \n",student1.ID);
    printf("Phone no: %d \n",student1.phone_no);
    printf("Marks: %f \n",student1.marks);
        
        
        
    return 0;
}