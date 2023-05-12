#include <stdio.h>
#define NUM 5 // NUM = 5
int main () // Heading
{
    int mister[NUM],p,max,min,checkmax,checkmin; // Variable Declaration
    float Sum,avg; // Variable Declaration

    printf("-------------------------------------------------------------------------------------\n");
    printf("Freshman check points  of this semester \n");
    printf("-------------------------------------------------------------------------------------\n");

    for(p=0; p<5; p++) { // p<5; 5 come from #define NUM 5
    printf("Enter points of mister [%d]:",p);// To get interger number from keyboard
    scanf("%d", &mister[p]); 
    }
    printf(".....................................................................................\n");

    for(p=0; p<5; p++) { // p<5; 5 come from #define NUM 5
    printf("mister[%d] = %d\n",p,mister[p]);
    Sum = Sum+mister[p]; // Sum is summation of mister[p] // for find avg
    }

    max=mister[0]; // max is start from mister[0] use for loop if mister[p] // find maximum 
    min=mister[0]; // min is start from mister[0] use for loop if mister[p] // find minimum 
    for(p=0; p<5; p++){ // p<5; 5 come from #define NUM 5
    if(mister[p] > max){
    max = mister[p];} 
    if(mister[p] < min){
    min = mister[p];}
    }

    for(p=0; p<5; p++) { 
    if(mister[p] == max) // find a location Maximum points by comparing values of maximum
    checkmax=p; // checkmax = p for confilm location
    if(mister[p] == min) // find a location minimum points by comparing values of minimum
    checkmin=p; // checkmin = p for confilm location
    }

    printf("-------------------------------------------------------------------------------------\n");

    printf("Maxximum points : mister[%d] = %d\n",checkmax,max);
    printf("Minimum  points : mister[%d] = %d\n",checkmin,min);
    avg = Sum/NUM;  
    printf("Average  points : %.2f\n", avg);
    // return EXIT_SUCCESS;
    return 0; // Return with no ploblem
}