/*根据钱江晚报官方微博的报导，最新的肥胖计算方法为：体重(kg) / 身高(m) 的平方。如果超过 25，你就是胖子。于是本题就请你编写程序自动判断一个人到底算不算胖子。
输入格式：
输入在一行中给出两个正数，依次为一个人的体重（以 kg 为单位）和身高（以 m 为单位），其间以空格分隔。其中体重不超过 1000 kg，身高不超过 3.0 m。
输出格式：
首先输出将该人的体重和身高代入肥胖公式的计算结果，保留小数点后 1 位。如果这个数值大于 25，就在第二行输出 PANG，否则输出 Hai Xing。*/
#include <stdio.h>
int main()
{
 float high,wigh,k;
 scanf("%f %f",&wigh,&high);
 k=wigh/(high*high);
 if(k>25)
 printf("%.1f\nPANG",k);
 else
 printf("%.1f\nHai Xing",k);
 return 0;
 } 
