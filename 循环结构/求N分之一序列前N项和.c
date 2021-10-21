/*本题要求编写程序，计算序列 1 + 1/2 + 1/3 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。*/
#include<stdio.h>
int main()
{
	int n,i;
	double sum,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1.0/i;
		sum=sum+a;
	}
	printf("sum = %.6f",sum);
	return 0;
}
