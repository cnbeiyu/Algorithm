#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char s[105];
int main(int argc, char const *argv[])
{
	int len;
	int ans = 0;
	scanf("%s", s);
	len = strlen(s);
	printf("length:%d\n", len);
	for (int i = 0; i < len; ++i)
	{
		if (s[i] == 'A') {
			ans++;
		}
	}
	printf("ans:%d\n", ans);
	return 0;
}