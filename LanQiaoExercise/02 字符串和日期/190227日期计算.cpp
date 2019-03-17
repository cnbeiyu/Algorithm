#include <iostream>
using namespace std;

// 塞基姆拉尔森公式--根据日期计算星期几
// w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400 ) % 7
//注意：把一月和二月看为是上一年的十三月和十四月！！
int main(int argc, char const *argv[])
{
	int w, d, m, y;
	cin >> d;
	cin >> m;
	cin >> y;
	w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400 ) % 7;
	cout << d << endl;
	cout << w;
	return 0;
}