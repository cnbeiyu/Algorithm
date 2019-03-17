// 按除以3的余数从小到大排序，余数相同则按整数从小到大排
#include <iostream>
#include <algorithm>
using namespace std;
int num[105];
bool cmp(int x, int y) {
	if (x % 3 != y % 3) {
		return x % 3 < y % 3;
	}
	else {
		return x < y;
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> num[i];
	}
	sort(num, num + n, cmp);
	for (int i = 0; i < n; ++i)
	{
		cout << num[i] << " " << endl;
	}

}