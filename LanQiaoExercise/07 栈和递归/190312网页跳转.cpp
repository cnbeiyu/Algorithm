#include <iostream>
#include <stack>
using namespace std;
stack<string> s1, s2;

int main(int argc, char const *argv[])
{
	int n;
	string url, op;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> op;
		if (op == "VISIT") {
			cin >> url;
			s1.push(url);
		} else if (op == "FORWORD") {
			if (s2.empty()) {
				cout << "ignore";
			} else {
				cout << s2.top() << endl;
				s1.push(s2.top());
				s2.pop();
			}
		} else if (op == "BACK") {
			if (s1.size() == 1) {
				cout << "ignore" << endl;
			} else {
				s2.push(s1.top());
				s1.pop();
				cout << s1.top() << endl;
			}
		}

	}
	return 0;
}