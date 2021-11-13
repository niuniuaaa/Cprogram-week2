#include<stdlib.h>
#include<stdio.h>
bool BinarySearch(const int  A[],int X,int N);
int main()
{
     	int A[]={1,3,11,22,33,48};
     	bool c=BinarySearch(A,22,6);
     	printf("%d",c);
}
bool BinarySearch(const int  A[],int X,int N)
{
	int Low,Mid,High;
	Low=0;High=N-1;
	while(Low<=High)
	{
	    Mid=(Low+High)/2;
	    if(A[Mid]<Mid+1)
	        Low=Mid+1;
	    else if(A[Mid]>Mid+1)
        	High=Mid-1;
    	else 
        	return  true;	
	} 
	return  false;
}
