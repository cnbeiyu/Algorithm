#include <iostream>
#include <stack>
using namespace std;
int ans[1000];
stack<int> s;
bool isPipei;
int main(int argc, char const *argv[])
{
	string ss;
	cin >> ss;
	isPipei = true;
	for (int i = 0; i < ss.size(); ++i)
	{
		if (ss[i] == '(') {
			s.push(i + 1);

		} else if (ss[i] == ')') {
			if (!s.empty()) {
				ans[i + 1] = s.top();
				s.pop();
			} else {
				isPipei = false;
				cout << "no" << endl;
				break;
			}
		}
	}
	if (isPipei) {
		cout << "yes" << endl;
		for (int i = 1; i <= ss.size(); ++i)
		{
			if (ans[i]) {
				cout << ans[i] << " " << i << endl;
			}
		}
	}
	return 0;
}