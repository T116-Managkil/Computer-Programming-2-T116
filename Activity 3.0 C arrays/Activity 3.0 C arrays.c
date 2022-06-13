#include <stdio.h>

int main(){
int arr[10],i,n,sum=0,average;

printf("Enter the number of elements: ");
scanf("%d", &n);

if(n<=10){
    for(i=0; i<n; i++){
        printf("Enter elements %d: ", i+1);
        scanf("%d", &arr[i]);

    sum=sum+arr[i];
    }

    sum=sum+arr[i];
    printf("Sum of all array elements: %d", sum);
    return 0;
}
else{
    printf("Only 10 arrays is allowed");
}
}