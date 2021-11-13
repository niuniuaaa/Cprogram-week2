#Nexchange

##算法一：依次填入数组A[0]到A[N-1],在循环中，每次填A[i],生成随机数都要检查是否不同于A[0]到A[i-1]，若与其中有重复，则舍弃重新生成，直到与前面i-1个数都不同，填入A[i].

##算法二：在算法一的，保存一个附加的数组：used数组，当一个随机数Ran最初被放入数组A时，used[Ran]=1,可以用一步来测试是否该随机数已经被使用，而不需要i步了。

##算法三：填写该数组使得A[i]=i+1然后：

for(i=1;i<N;i++)

swap(&A[i]&A[RandInt(0,i)]);

###复杂度

算法一：O(N*NlogN);

算法二：O(NlogN)；

算法三：O(1)