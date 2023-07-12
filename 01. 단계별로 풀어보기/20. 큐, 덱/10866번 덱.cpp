/*
* @title    : 10866번 덱(실버 4)
* @content  : 큐, 덱
* @author   : 박동연
* @date     : 230712
* @time     : 432ms
* @memory   : 2024KB
* @state    : 완료
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> que;
	string input;

	int N = 0;
	int temp = 0;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		input.clear();
		cin >> input;

		if ("push_front" == input)
		{
			cin >> temp;
			que.push_front(temp);
		}
		else if ("push_back" == input)
		{
			cin >> temp;
			que.push_back(temp);
		}
		else if ("pop_front" == input)
		{
			if (que.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << que.front() << "\n";
				que.pop_front();
			}
		}
		else if ("pop_back" == input)
		{
			if (que.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << que.back() << "\n";
				que.pop_back();
			}
		}
		else if ("size" == input)
		{
			cout << que.size() << "\n";
		}
		else if ("empty" == input)
		{
			if (que.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if ("front" == input)
		{
			if (que.empty())
				cout << -1 << "\n";
			else
				cout << que.front() << "\n";
		}
		else if ("back" == input)
		{
			if (que.empty())
				cout << -1 << "\n";
			else
				cout << que.back() << "\n";
		}
	}

	return 0;
}