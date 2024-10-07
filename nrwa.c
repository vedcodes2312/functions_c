//user defined function: without return type,with argument
//no return type,with argument nrwa

#include<stdio.h>

void sum(int x,int y);//declaration

void main()
                       //calling
{
    int a=5,b=6;

    sum(a,b);

}

void sum(int x,int y) //definition
{

    int m=x,n=y;
    printf("\n sum=%d",m+n);
    
}