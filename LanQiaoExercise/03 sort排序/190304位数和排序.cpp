#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
	int asum = 0;
	int bsum = 0;
	asum = a / 1000 + a % 1000 / 100 + a % 100 / 10 + a % 10;
	bsum = b / 1000 + b % 1000 / 100 + b % 100 / 10 + b % 10;
	if (asum == bsum)
	{
		return a < b;
	}
	else
	{
		return asum < bsum;
	}
}
int num[105];
int main(int argc, char const *argv[])
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &num[i]);
	}
	sort(num, num + N, cmp);
	for (int i = 0; i < N; ++i)
	{
		printf("%d\n", num[i]);
	}
	return 0;
}