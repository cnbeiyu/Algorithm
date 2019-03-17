#include<iostream>
#include<set>
using namespace std;
set<int> bj;
int main(int argc, char const *argv[])
{
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		bj.insert(a);
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b;
		bj.insert(b);
	}
	for (set<int>::iterator it = bj.begin(); it != bj.end(); it++)
	{
		cout << *it << " ";
	}


	return 0;
}