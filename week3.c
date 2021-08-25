#include <stdio.h>
int main(){
    float number[1000];
    printf("Input number : ");
    scanf("%f%f%f",&number[0],&number[1],&number[2]);
    float max = number[0] ;
    float min = number[0];
    for(int i=0;i<3;i++){
        if(number[i]>max){
           max= number[i] ;
           if(number[i]<min) 
           min = number[i];          
        }
    }
	float mini = number[0];
    for(int i=0;i<3;i++){
        if(number[i]<max && number[i]>min){
           mini= number[i] ; 
			}
		}
    
 printf("sum = %.2f ",min+mini);
}
