/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
    int a=0,b=1,c;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    for(int i=0;i<n-2;i++)
    {
     c=a+b;
     a=b;
     b=c;
     }
	return c;
}
int nthPrime(int num)
{
    if(num<0) return -1;
    int l=0,k,i=2;
    while(1)
    {
        int c=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0) c++; 
        }
        if(c==0)
        {
            l++;
            if(l<=num) k=i;
        }
        if(l==num) break;
        i++;
    }
	return k;
}