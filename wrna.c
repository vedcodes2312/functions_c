//user defined function: with return type,without argument
//with return type,no argument wrna

#include<stdio.h>

int sum(); //declaration

void main()
{
   int add;
   add = sum(); //calling
   printf("\n sum=%d",add);
}

int sum() //definition
{
    int a=5,b=6;
    return (a+b);
}

