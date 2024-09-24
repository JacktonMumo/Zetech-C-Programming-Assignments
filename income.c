//Bank loan
#include <stdio.h>
int main(){
    int age, income;
   /* printf("Enter your age:");
    scanf("%d", &age);
    
    printf("Enter your income:");
    scanf("%d", &income);*/
    printf("Enter your age and income:");
    scanf("%d%d",&age, &income);
    
    if(age>=21 && income>21000){
        printf("Congratulations you qualify for a loan");
    }
    else{
        printf("Bye bye");
    }
}