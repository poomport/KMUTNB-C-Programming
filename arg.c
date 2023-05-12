#include<stdio.h>
void add(int a , int b); // Function prototype
void sub(int a , int b); // Function prototype
void mul(int a , int b); // Function prototype
void div(int a , int b); // Function prototype
int main(void)
{
    int a,b;
    // fill out all input value for keyboard before start call function.
    printf("Enter NUM 1 :");
    scanf("%d",&a);
    printf("Enter NUM 2 :");
    scanf("%d",&b);
    printf(".......................................\n");
    // call function
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    return 0;
}
void add(int av1,int av2){
    printf("Add(%d,%d) : %d + %d \n",av1,av2,av1,av2);
    printf("Add result = %d\n",av1+av2);
    printf("---------------------------------------\n");
}
void sub(int av1,int av2){
    printf("Sub(%d,%d) : %d - %d \n",av1,av2,av1,av2);
    printf("Sub result = %d\n",av1-av2);
    printf("---------------------------------------\n");
}
void mul(int av1,int av2){
   int resultmul,i;
   printf("Mul(%d,%d) : %d(%d) \n",av1,av2,av1,av2);
   for (i=0; i<av2; i++) // i=0 set value to 0 as the default for this loop to working
   { 
   resultmul += av1; //  the same resulis = results + av1;
   }
   printf("Mul result = %d\n",resultmul);
   printf("---------------------------------------\n");
    
}
void div(int av1,int av2){
   int resultdiv=0; // resultdiv = 0 because use prevent garbage value.
   printf("div(%d,%d) : %d / %d \n",av1,av2,av1,av2);
   while(av1>=av2)
   {
   av1 = av1 - av2;
   resultdiv++;
   }
   printf("Div result = %d\n",resultdiv);
   printf("---------------------------------------\n");
}
