#include<stdio.h>


    struct student_data{

    int id;
    float result;
    }shanto,himel,ashik;

    void main(){
    
    printf("Enter ID: ");
    scanf("%d", &shanto.id);
   
    printf("Enter Result: ");
    scanf("%f", &shanto.result);


    printf("ID: %d\n", shanto.id);
    printf("Result: %.2f", shanto.result);



}