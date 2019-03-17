#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	char go[15];
	char direction[15];
	int distance;
	int now_direction = 0; //当前朝向，%4，上0右1下2左3
	int x = 0, y = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> direction >> distance;
		if (strcmp(direction, "forward") == 0)
		{

		}
		else if (strcmp(direction, "back") == 0)
		{
			now_direction += 2;
		}
		else if (strcmp(direction, "left") == 0)
		{
			now_direction += 3;
		}
		else if (strcmp(direction, "right") == 0)
		{
			now_direction += 1;
		}
		// cout << now_direction % 4;
		cout << "distance:" << distance << endl;
		switch (now_direction % 4) {
		case 0: y += distance; break;
		case 1: x += distance; break;
		case 2: y = y - distance; break;
		case 3: x = x - distance; break;
		}
	}
	cout << x << "," << y << endl;
	return 0;
}