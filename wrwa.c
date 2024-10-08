//user defined function: with return type with argument wrwa

#include<stdio.h>

int sum(int x,int y);//declaration

void main()
{                  //calling     
    int a=5,b=6;
    int result;
    result = sum(a,b);
    printf("\n sum%d",result);
}

int sum(int x,int y)//definition 
{
    int m=x,n=y;
    return (m+n);
}