#include<stdio.h>
int main(){

    int i,n;
    int arr[100];
    int item,min,max,mid;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter Array Elements: \n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the variable you want to search: \n");
    scanf("%d", &item);

    min=0;
    max=n-1;
    mid=(min+max)/2;

    while(min<=max){
        if(arr[mid]<item){
            min=mid+1;
            printf("%d is in position %d", item, min);
            break;
        }
        else if(arr[mid]==item){
            printf("%d is in position %d", item, mid+1);
            break;
    }
        else
            max=mid-1;
            mid= (min+max)/2;
            printf("%d is in position %d", item, max);
            break;

            if(min>max){
    printf("Not Found! %d isn't present in the list\n", item );
    break;
    }
    }

    
return 0;
}