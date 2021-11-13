#include<stdlib.h>
#include<stdio.h>
long int Pow(long int X,unsigned int N);
bool IsEven(int N);
int main()
{
	int x=2,m=2;
	int c=Pow(x,m);
	printf("%d",c);
}
long int Pow(long int X,unsigned int N)
{
	if(N==0)
	    return 1;
	if(N==1)
	    return X;
	if(IsEven(N))
	    return Pow(X*X,N/2);
	else
	    return Pow(X*X,N/2)*X; 
}
bool IsEven(int N)
{
    if(N%2 == 0)
    return true;
    else
    return false;
}
