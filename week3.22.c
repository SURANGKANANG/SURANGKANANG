#include <stdio.h>
main() {
    double a,b,c ;
    printf("Input number : ");
    scanf("%ld%ld%ld",&a,&b,&c) ;
    double min = a+b ;
    if(a+c<min){
        min= a+c ;
        if(b+c<min)
        min= b+c ;
    }
    printf("sum = %ld",min);
}