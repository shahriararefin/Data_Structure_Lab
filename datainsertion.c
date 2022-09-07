#include<stdio.h>
int main(){

    int array[5]={22,33,66,88,11};
    int i,index=0,new_value=50;

    printf("Enter the index position to insert the new value: ");
   scanf("%d", &index);
/*
    for(i=4;i>index;i--){
        array[i]=array[i-1];
    }
    
        array[index]=new_value;

        printf("Array After insertion: ");
        for(i=0;i<5;i++){
            printf("%d ",array[i]);
        }
*/

for(i=4; i>=index; i++){

        array[i+2]=array[i];
}
    array[index]=new_value;

printf("Array After insertion: ");
        for(i=0;i<5;i++){
            printf("%d ",array[i]);
        }
    return 0;
}