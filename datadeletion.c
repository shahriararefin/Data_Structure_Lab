#include<stdio.h>
int main(){

    int  i,n,array[100];
    int flag=1, count=-1;
    int search;

for (i = 0; i < n; i++)

  {    if (array[i] == search)    

    {  count=i;    

      printf("%d is present at Position: %d.\n", search, i+1);

      printf("%d is present at Index no %d.\n", search, i);

      break; 

     flag=0; 

 }  }

   

    return 0;
}