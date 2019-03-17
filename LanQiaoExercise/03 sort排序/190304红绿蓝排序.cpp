#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
char s[100];
int main(int argc, char const *argv[])
{
	int len;
	scanf("%s", &s);
	len = strlen(s);
	sort(s, s + len);
	printf("%s\n", s);
	int r = 0;
	int g = 0;
	int b = 0;
	for (int i = 0; i < len; ++i)
	{
		if (s[i] == 'R')
			r++;
		else if (s[i] == 'G')
		{
			g++;
		}
		else {
			b++;
		}
	}
	r = r * 2;
	g = g * 4;
	b = b * 6;
	if (r < g) {
		if (r < b)
			printf("%d\n", r / 2);
		else
			printf("%d\n", b / 6);
	}
	else
	{
		if (g < b)
			printf("%d\n", g / 4);
		else
			printf("%d\n", b / 6);
	}
	return 0;
}