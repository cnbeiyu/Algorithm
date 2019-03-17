#include <cstdio>
#include <algorithm>
using namespace std;
int children[100];
int ball[100];
int main(int argc, char const *argv[])
{
	int n, m, ans;
	scanf("%d%d", &n, &m);
	printf("请输入儿童数：\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &children[i]);
	}
	printf("请输入球数：\n");
	for (int i = 0; i < m; ++i)
	{
		scanf("%d", &ball[i]);
	}
	sort(children, children + n);
	sort(ball, ball + m);
	ans = 0;
	int j = 0;
	for (int i = 0; i < n; ++i)
	{
		j = ans;
		ans = 0;
		// printf("%d+++++++++++++\n", i);
		for (int k = 0; k < m; ++k)
		{
			// printf("%d:%d\n", children[i], ball[k]);
			if (children[i] >= ball[k])
			{
				ans++;
			}
			else
				break;
		}
		printf("%d", ans - j);
	}


	return 0;
}