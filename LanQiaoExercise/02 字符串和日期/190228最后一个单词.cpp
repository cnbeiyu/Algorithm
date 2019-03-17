#include <cstdio>
#include <cstring>
// char ch[10000];
// int main(int argc, char const *argv[])
// {
// 	scanf("%s", &ch);
// 	int n = 0;
// 	int ans = 0;
// 	n = strlen(ch);
// 	printf("len:%d\n", n );
// 	for (int i = n - 1; i > -1; --i)
// 	{
// 		if (ch[i] != ' ') {
// 			ans++;
// 		}
// 		if (ch[i] == ' ')
// 			break;
// 	}
// 	printf("%d\n", ans);
// 	return 0;
// }
char s[100];
int main(int argc, char const *argv[])
{
	while (scanf("%s", s) != EOF);
	printf("%d\n", strlen(s));
	return 0;
}