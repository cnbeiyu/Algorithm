#include <cstdio>
#include<cstring>
char s[1000];
int main(int argc, char const *argv[])
{
	int len;
	scanf("%s", &s);
	len = strlen(s);
	printf("%d\n", len);
	for (int i = len - 1; i > -1; --i)
	{
		printf("%c", s[i]);
	}
	return 0;
}