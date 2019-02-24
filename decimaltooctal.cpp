/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>

int decimalToOctal(int num)
{
    if(num<=0)
    {
        return -1;
    }
    int i,x=0,d;
    for(i=0;num!=0;i++)
    {
        
        d=num%8;
        x=d*pow(10,i)+x;
        num=num/8;
        
        
    }
	return x;
}

float decimalToOctalFraction(float num)
{
	return 0.0;
}

