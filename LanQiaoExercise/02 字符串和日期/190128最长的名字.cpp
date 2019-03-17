#include <cstdio>
#include <cstring>
using namespace std;
char s[101];
char ans[101];
int ansnum;
int  main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);
	printf("%d\n", n);
	for (int i = 0; i < n; ++i)
	{
		// printf("xxxxxxxx\n");
		// scanf("plz enter n:%s", &s);
		scanf("%s", &s);
		if (strlen(s) >= strlen(ans)) {
			ansnum = strlen(s);
			strcpy(ans, s);
		}
	}
	printf("ans:%s\n", ans);
	printf("num:%d\n", ansnum);
	return 0;
}