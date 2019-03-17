#include <iostream>
#include <set>
using namespace std;
struct People
{
	int height;
	int weight;
	int age;
	bool operator<(const People &rhs) const {
		if (weight == rhs.weight)
		{
			return height < rhs.height;
		}
		if (age == rhs.age)
		{
			return height < rhs.height;
		}
		else
		{
			return weight < rhs.weight;
		}
	}
	bool operator==(const People &rhs)
	{
		return ( height == rhs.height) && (weight == rhs.weight) && (age == rhs.age);

	}
};
int main(int argc, char const *argv[])
{
	set<People> bs;
	set<People> th;
	int n, m;
	People people;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> people.height >> people.weight >> people.age;
		bs.insert(people);
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> people.height >> people.weight >> people.age;
		th.insert(people);
	}
	for (set<People>::iterator it = th.begin(); it != th.end(); it++) {
		for (set<People>::iterator itt = bs.begin(); itt != bs.end(); itt++) {
			if (((*it).age == (*itt).age) && ((*it).height == (*itt).height) && ((*it).weight == (*itt).weight))
				// if (*it == *itt)
			{
				cout << "yes" << endl;
				break;
			}
			if ((*itt).age == (*bs.end()).age)
			{
				cout << "no" << endl;
			}
			// cout << (*bs.end()).weight << endl;
		}
	}
	return 0;
}