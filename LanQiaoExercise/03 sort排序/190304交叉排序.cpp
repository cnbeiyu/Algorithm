#include <cstdio>
#include <algorithm>
using namespace std;
int num[1000];
int main(int argc, char const *argv[])
{
	int N, l1, r1, l2, r2;
	scanf("%d%d%d%d%d", &N, &l1, &r1, &l2, &r2);
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &num[i]);
	}
	sort(num + l1 - 1, num + r1 );
	sort(num + l2 - 1, num + r2 - 1);
	for (int i = 0; i < N; ++i)
	{
		printf("%d", num[i]);
	}
	return 0;
}