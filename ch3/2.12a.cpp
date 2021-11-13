#include<stdlib.h>
#include<stdio.h>
int MaxSubsequenceSum(const int A[],int N); 
int main()
{
	int A[]={-2,11,-4,13,-5,-2};
	printf("A的最小子序列之和为：%d\n",MaxSubsequenceSum(A,6));
	return 0;
} 
int MaxSubsequenceSum(const int A[],int N)
 {
 	int ThisSum,MinSum,j;
 	ThisSum=MinSum=0;
 	for(j=0;j<N;j++)
 	{
 	ThisSum+=A[j];
	 if(ThisSum<MinSum)	
	 MinSum=ThisSum;
	 else if(ThisSum>0)
	 ThisSum=MinSum;
	}
	return  MinSum;
 }
