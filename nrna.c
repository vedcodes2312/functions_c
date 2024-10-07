//user defined function: without return type,without argument
//no return type,no argument nrna

#include<stdio.h>

void sum(); //declaration

void main()
{
    sum(); //calling

}

void sum() //definition
{
    int a=5,b=6;
    printf("\n sum=%d",a+b);
}

