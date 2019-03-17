#include <iostream>
#include  <string>
#include<cstring>
using namespace std;
char s1[1005], s2[1005];
int main(int argc, char const *argv[])
{
	gets(s1);
	gets(s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int ans = 0;
	for (int i = 0; i < len1; ++i)
	{
		bool matched = true;
		for (int j = 0; j < len2; j++)
			if (s1[i + j] != s2[j]) {
				matched = false;
				break;
			}
		if (matched) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}