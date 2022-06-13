#include <stdio.h>

int main(){
    int num[5],i,j;
    float grades, sum=0, ave;
    
    printf("Enter five numbers: ");
    scanf("%d", &j);
    
    if(j<=5){
        while(j>100 || j<1){
            printf("Invalid Input");
            printf("Enter Again");
            scanf("%d", &j);
        }
        for(i=0; i<j; i++){
            printf(" ", i+1);
            scanf("%f", &grades);
            sum=sum+grades;
        }
        ave=sum/5;
        printf("Average = %f", ave);
        return 0;
    }
    else
    printf("Limit to only 5");
}