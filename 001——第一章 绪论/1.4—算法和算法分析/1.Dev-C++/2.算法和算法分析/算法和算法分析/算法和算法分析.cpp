//计算1-1/x+1/x*x-1/x*x*x.....T(n)=O(n2)

#define _CRT_SECURE_NO_WARNINGS
//algo1-1.cpp计算1-1/x+1/x*x-1/x*x*x.....
#include <stdio.h>
#include <sys/timeb.h>
int  main()
{
	timeb t1, t2;
	long t;
	double x, sum = 1, sum1;
	int i, j, n;
	printf("请输入x n: ");
	scanf("%lf%d", &x, &n);
	ftime(&t1);//求得当前时间
	for (i = 1; i < n; i++)
	{
		sum1 = 1;
		for (j = 1; j <= i; j++)
		{
			sum1 = sum1 * (-1.0 / x);
		}
		sum += sum1;
	}
	ftime(&t2);//求得当前时间
	t = (t2.time - t1.time) * 1000 + (t2.millitm - t1.millitm);//计算时间差
	printf("sum=%lf 用时%ld毫秒\n", sum, t);
	return 0;
}


//计算1-1/x+1/x*x-1/x*x*x.....更快捷的算法 T(n)=O(n)

#define _CRT_SECURE_NO_WARNINGS
//algo1-1.cpp计算1-1/x+1/x*x-1/x*x*x.....
#include <stdio.h>
#include <sys/timeb.h>
int main()
{
	timeb t1, t2;
	long t;
	double x, sum1 = 1, sum = 1;
	int i, n;
	printf("请输入x n: ");
	scanf("%lf%d", &x, &n);
	ftime(&t1);//求得当前时间
	for (i = 1; i <= n; i++)
	{
		sum1 *= -1.0 / x;
		sum += sum1;
	}
	ftime(&t2);//求得当前时间
	t = (t2.time - t1.time) * 1000 + (t2.millitm - t1.millitm);//计算时间差
	printf("sum=%lf 用时%ld毫秒\n", sum, t);
	return 0;
}




