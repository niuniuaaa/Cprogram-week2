#include<stdlib.h>
#include<stdio.h>
int MaxSequence(const int A[],int N);
int MaxSubSum(const int A[],int left,int right); 
int MaxSubsequenceSum(const int A[],int N); 
int Max3(int a,int b,int c); 
int main()
{
	int A[]={-2,11,-4,13,-5,-2};
	printf("A的最大子序列之和为：%d\n",MaxSubsequenceSum(A,6));
	return 0;
}
/*穷举法 
int MaxSequence(const int A[],int N)
{
	int ThisSum,MaxSum,i,j,k;
	MaxSum=0;
	for(i=0;i<N;i++)
	    for(j=i;j<N;j++){
		    ThisSum=0;
		    for(k=i;k<=j;k++)
	  	    ThisSum+=A[k];
	    if(ThisSum>MaxSum)
	        MaxSum=ThisSum;
    }
    return MaxSum;
}*/ 
/*穷举法改良 
int MaxSequence(const int A[],int N)
{
	int ThisSum,MaxSum,i,j;
	MaxSum=0;
	for(i=0;i<N;i++)
	{
	   ThisSum=0;
	   for(j=i;j<N;j++)
	   {
	  	ThisSum+=A[j];
	    if(ThisSum>MaxSum)
	    MaxSum=ThisSum;
       }
    }
    return MaxSum;
}*/
//分而治之 
/*int MaxSubSum(const int A[],int Left,int Right)
{
	int MaxLeftSum,MaxRightSum;
	int MaxLeftBorderSum,MaxRightBorderSum;
	int LeftBorderSum,RightBorderSum;
	int Center,i;
	if(Left==Right)
	    if(A[Left]>0)
	       return  A[Left];
	    else
	       return 0;
	Center=(Left+Right)/2;
	MaxLeftSum=MaxSubSum(A,Left,Right);
	MaxRightSum=MaxSubSum(A,Center+1,Right);
	MaxLeftBorderSum=0;LeftBorderSum=0;
	for(i=Center;i>=Left;i--)
	{
		LeftBorderSum+=A[i];
		if(LeftBorderSum>MaxLeftBorderSum)
		MaxLeftBorderSum=LeftBorderSum;
	}
	MaxRightBorderSum=0;RightBorderSum=0;
	for(i=Center+1;i>=Right;i--)
	{
		RightBorderSum+=A[i];
		if(RightBorderSum>MaxRightBorderSum)
		MaxRightBorderSum=RightBorderSum;
	}
	int m=Max3(MaxLeftSum,MaxRightSum,MaxLeftBorderSum+MaxRightBorderSum);
	return m;
}
int MaxSubsequenceSum(const int A[],int N)
{
	return MaxSubSum(A,0,N-1); 
}
int Max3(int a,int b,int c)
{
	int max;
	if(a > b)    
		max = a;
	else
		max = b;
	if(max < c)
		max = c;
	return max;
}*/ 
//算法4 
 int MaxSubsequenceSum(const int A[],int N)
 {
 	int ThisSum,MaxSum,j;
 	ThisSum=MaxSum=0;
 	for(j=0;j<N;j++)
 	{
 	ThisSum+=A[j];
	 if(ThisSum>MaxSum)	
	 MaxSum=ThisSum;
	 else if(ThisSum<0)
	 ThisSum=0;
	}
	return  MaxSum;
 }

  
