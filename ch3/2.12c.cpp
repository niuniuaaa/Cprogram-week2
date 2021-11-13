#include<stdlib.h>
#include<stdio.h>
int maxsequencemul(int a[],int n);
int min(int a, int b,int c);
int max(int a, int b,int c);
int max1(int a, int b);
int main()
{
	int A[3]={-2,3,-4};
	int c=maxsequencemul(A,3);
	printf("%d",c);
	return 0;
}
int maxsequencemul(int a[],int n)
{
	int maxA[10],minA[10],ans;
	maxA[0]=minA[0]=a[0];
	for(int i=1;i<n;i++)
	{
		maxA[i]=max(a[i],a[i]*maxA[i-1],a[i]*minA[i-1]);
		minA[i]=min(a[i],a[i]*minA[i-1],a[i]*minA[i-1]);
		ans=max1(ans,maxA[i]);
	}
	return ans;
}
int max(int a, int b,int c) 
{       
        int max;
        if (a >= b) 
            max=a;
        else 
            max=b;
        if(c>max)
        max=c;
		return max;
}

int min(int a, int b,int c)
{
         int min;
        if (a <= b) 
            min=a;
        else 
            min=b;
        if(c<min)
      	min=c;
		return min;
}
int max1(int a, int b)
{
	int max1;
        if (a >= b) 
            max1=a;
        else 
            max1=b;
        //if(c>max)
        //max=c;
		return max1;
}
