//C variables and Data types
//Preprocessor directive
#include <stdio.h> // scanf(), printf()
int main () {
    //declaration and initialization
    char a;
    char name[]={}; 
    int age;
    float area;
    double salary;
    printf("Enter a character:");
    scanf("%c",&a);
    printf("The character is %c \n" ,a);
    
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Your name is %s \n" ,name);
    
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Your age is %d \n" ,age);
    
    printf("Enter the area:");
    scanf("%f",&area);
    printf("The area is %f \n" ,area);
    
    printf("Enter your salary:");
    scanf("%lf",&salary);
    printf("The salary is %lf \n" ,salary);
    
    // printf("The character is %c \n" ,a);
    // printf("The name of the character is %s \n" ,name);
    // printf("The age of the character is %d years. \n",age);
    // printf("The area is %.3f cm squared \n", area);
    // printf("The salary is Ksh %lf \n", salary);
    return 0;
}