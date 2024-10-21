#include<stdio.h>

int main(){
    int i,j;
    
    int marks[2][3]={
        {100,80,50},
        {70,95,60}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("The marks are %d\n",marks[i][j]);
            
        }
    }
    return 0;
}