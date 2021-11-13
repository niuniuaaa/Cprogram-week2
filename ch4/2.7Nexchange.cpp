#include<stdlib.h>
#include<stdio.h>
#include <sys/time.h>
int RandInt(int i, int j);
void swap(int &a, int &b);
void zhihuan1(int a[], int n);
void zhihuan2(int a[], int n);
void zhihuan3(int a[], int n);
int main()
{
    srand(unsigned(time(NULL)));
    int a[5],b[5],c[5];
    zhihuan1(a,5);
    zhihuan2(b,5);
    zhihuan3(c,5);
    for(int i=0;i<5;i++)
    printf("%d  ",a[i]);
    printf("\n");
    for(int i=0;i<5;i++)
    printf("%d  ",b[i]);
    printf("\n");
    for(int i=0;i<5;i++)
    printf("%d  ",c[i]);
    printf("\n");
}
void zhihuan1(int a[], int n)
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		tmp=RandInt(1, n);
		for (int j = 0; j < i; j++)
		{
			if(tmp==a[j])
			{
				tmp=RandInt(1, n);
				j=-1;
			}
		}
		a[i] = tmp;
	}
}
int RandInt(int i, int j)		
{
	if(i==0)
		return rand()%(j+1);
	else
		return rand()%(j-i+1) + i;
}

void zhihuan2(int a[], int n)
{
	int tmp,used[n]={0};
	for (int i = 0; i < n; i++)
	{
		tmp=RandInt(1, n);
		while(used[tmp]!=0)
			tmp=RandInt(1, n);
		a[i]=tmp;
		used[tmp]=1;
	}
}
void swap(int &a, int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
 
void zhihuan3(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i]=i+1;
	}
	for (int i = 1; i < n; i++)
	{
		swap(a[i], a[ RandInt(0, i) ]);
	}
}
