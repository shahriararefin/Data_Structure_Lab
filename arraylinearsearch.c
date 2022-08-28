#include<stdio.h>
int main(){

    int i;
    char a,b,c,d,e,value;
    char array[5]={a,b,c,d,e};

    printf("Enter the character to search: ");
    scanf("%c",&value);

    for(i=0;i<=4;i++){
        if(array[i]==value){

            printf("%c ",array[i+1]);
        }
    }
    
        printf("Element not found");

    return 0;
}