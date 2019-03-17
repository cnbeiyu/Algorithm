#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;
set<string> dc;
int main(int argc, char const *argv[])
{
	int n, d;
	string word;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> d >> word;
		if (d == 0)
		{
			dc.insert(word);
		}
		else
		{
			if (dc.count(word))
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
		}
	}
	return 0;
}