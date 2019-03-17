#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int callen(int a) {//计算位数
	int len = 0;
	while (a != 0) {
		a = a / 10;
		len++;
	}
	return len;
}
int calgew(int a) {//返回个位数
	int len;
	len = callen(a);
	// cout << len << endl;
	for (int i = 0; i < len - 1; ++i)
	{
		double b;
		// cout << len - 1 - i << endl;
		b = pow(10, len - 1 - i);

		// cout << i << b << endl;
		a = a % (int)b;
	}
	return a;
}
int calsw(int a) {//返回首位数
	int len;
	len = callen(a);
	double b;
	b = pow(10, len - 1);
	a = a / (int)b;
	return a;
}
int dx(int n) {//倒排
	int a = 0;
	int d;
	double c;
	int len = callen(n);
	for (int i = 0; i < len ; ++i)
	{
		// printf("%d***************\n", i);
		double b;
		b = pow(10, len - 1 - i);
		c = pow(10, i);
		// cout << b << "+++++" << c << endl;
		// a = a + (int)c * (n / (int)b);
		a = a + (int)c * (n % ((int)b * 10) / (int)b);
		// cout << a << endl;
	}
	return a;
}

int main(int argc, char const *argv[])
{
	int n, len;
	int m = 0;
	cin >> n;
	len = callen(n);
	while (calgew(n) != calsw(n)) {
		// cout << dx(n) << "======" << endl;
		n = n + dx(n);
		cout << n << endl;
	}
	// cout << n;
	return 0;
}