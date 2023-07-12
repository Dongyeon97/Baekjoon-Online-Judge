/*
* @title    : 18258번 큐2(실버 4)
* @content  : 큐, 덱
* @author   : 박동연
* @date     : 230711
* @time     : 48ms
* @memory   : 3508KB
* @state    : 완료
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	list<int> iList;
	int N = 0;
	int temp = 0;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		str.clear();
		temp = 0;

		cin >> str;
		if ("push" == str)
		{
			cin >> temp;
			iList.push_back(temp);
		}
		else if ("pop" == str)
		{
			if (iList.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << iList.front() << "\n";
			iList.pop_front();
		}
		else if ("size" == str)
		{
			cout << iList.size() << "\n";
		}
		else if ("empty" == str)
		{
			if (iList.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if ("front" == str)
		{
			if (iList.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << iList.front() << "\n";
		}
		else if ("back" == str)
		{
			if (iList.empty())
			{
				cout << -1 << "\n";
				continue;
			}
			cout << iList.back() << "\n";
		}
	}
	return 0;
}