#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//1.递归和非递归分别实现求第n个斐波那契数。
//
//2.编写一个函数实现n ^ k，使用递归实现
//
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//4. 编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
//5.递归和非递归分别实现strlen
//6.递归和非递归分别实现求n的阶乘
//7.递归方式实现打印一个整数的每一位



//int Fib(int n)//循环
//{
//	int i = 0;
//	int f1 = 1;
//	int f2 = 1;
//	int sum = 1;
//	for (i = 2; i < n; i++)
//	{
//		sum = f1 + f2;
//		f1 = f2;
//		f2 = sum;
//	}
//	return sum;
//}
//
//int Fib(int n)//递归
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}





double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k >= 1)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	printf("%lf\n",Pow(n, k));
	return 0;
}






//int DigitSum(int n)
//{
//	if (n > 0 && n <= 9)
//		return n;
//	else
//		return  n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", DigitSum(num));
//	return 0;
//}





//void reverse_string(char* string)
//{
//	if (*string == '\0') 
//	{
//		return 0;
//	}
//	reverse_string(string + 1);
//	printf("%c ", *string);
//}
//
//int main()
//{
//	char* str = "abcde";
//	reverse_string(str);
//	return 0;
//}




//int mystrlen(char* string)//非递归
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//
//int mystrlen(char* string)//递归
//{
//	if (*string != '\0')
//	{
//		return 1 + mystrlen(string + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char string[] = "abcde";
//	printf("%d\n", mystrlen(string));
//	return 0;
//}





//int fac(int n)//递归
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//
//}
//
//int fac(int n)//非递归
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fac(n);
//	printf("%d\n", fac(n));
//	return 0;
//}




//void Print(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		Print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}