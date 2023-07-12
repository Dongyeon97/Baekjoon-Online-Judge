/*
* @title    : 2164번 카드 2(실버 4)
* @content  : 큐, 덱
* @author   : 박동연
* @date     : 230711
* @time     : 48ms
* @memory   : 17728KB
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

	int N = 0;	// 주어지는 카드의 수

	list<int> iList;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		iList.push_back(N - i);
	}

	while (true)
	{
		if (1 == N)
		{
			iList.push_back(1);
			break;
		}
		iList.pop_back();
		if (iList.size() <= 1)
			break;
		iList.push_front(iList.back());
		iList.pop_back();
	}
	
	auto iter = iList.begin();

	cout << *iter << endl;

	return 0;
}