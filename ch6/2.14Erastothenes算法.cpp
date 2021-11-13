#include<stdlib.h>
#include<stdio.h>
#include<math.h>
//void sort(int a[],int n);
void shaixuan(int N);
int main()
{
//	int a[10]={10,6,3,37,33,2,36,45,44,8};
//	sort(a,10);
//	for(int j=0;j<10;j++)
//	printf("%d",a[j]);
    int N=100;
    shaixuan(N);
    return 0;
    
	
}
void shaixuan(int N)
{
    
	bool flag[100];
	for(int j=0;j<N;j++)
	{
		flag[j]=1;
	}
	int b=sqrt(N);
	for(int i=2;i<b;i++)
	{
		if(flag[i]==1)
		{
			for(int j=2*i;j<N;j+=i)
			{
				flag[j]=0;
			}
		}
	}
/*	flag[0]=0;
	for(int i=a[0];i>b;)
	{
		for(int m=1;a[m]*i<=a[9];)
		{
			if(a[m]%i==0)
			flag[m]=1;
			m++;
		}
		i++;
	}
*/
	for(int j=0;j<N;j++)
	{
		if(flag[j]==1)
		printf("%d ",j);
	}
}
/*void sort(int a[],int n)
{
    int i, j , minValue, tmp;
    for(i = 0; i < n-1; i++)
    {
        minValue = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[minValue] > a[j])
            {
                minValue = j;
            }
        }
        if(minValue != i)
        {
            tmp = a[i];
            a[i] = a[minValue];
            a[minValue] = tmp;
        }
    }
}*/
