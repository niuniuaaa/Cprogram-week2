#include<stdlib.h>
#include<stdio.h>
int MaxSubsequenceSum(const int A[],int N); 
int main()
{
	int j=0;
	int A[]={-2,2,-4,13,5,11};
	for(int i=0;i<6;i++) /*�ؼ������ѭ��һ��Ҫ��ȷ*/
    if(A[i]>0) A[j++]=A[i];  
    for(int i=0;i<j;i++)
    printf("%d ",A[i]); 
	printf("A����С��������֮��Ϊ��%d\n",MaxSubsequenceSum(A,j));
	return 0;
}
int MaxSubsequenceSum(const int A[],int N)
 {
 	int ThisSum,MinSum,i,j;
 	ThisSum=0;
 	MinSum=A[0]+A[1];
 	for(i=0;i<4;i++)
 	{ 
 	for(j=i;j<4;j++)
 	{
 	ThisSum=A[i]+A[j+1];
	 if(ThisSum<=MinSum)	
	 MinSum=ThisSum;
	}}
	return  MinSum;
 }
