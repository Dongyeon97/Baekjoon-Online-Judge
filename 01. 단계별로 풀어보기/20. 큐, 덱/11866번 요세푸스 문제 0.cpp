/*
* @title    : 11866번 요세푸스 문제 0(실버 5)
* @content  : 큐, 덱
* @author   : 박동연
* @date     : 230711
* @time     : 0ms
* @memory   : 2024KB
* @state    : 완료
*/

#include <iostream>
#include <deque>
#include <vector>

using namespace std;

// 준석이형이 힌트 줘서 품
int main()
{
	int N = 0;	// 사람 수
	int K = 0;	// k번째 사람 제거

	deque<int> que;
	vector<int> vec;

	cin >> N >> K;

	for (int i = 1; i <= N; ++i)
	{
		que.push_back(i);
	}

	while(!que.empty())
	{
		for (int i = 0; i < K - 1; ++i)
		{
			que.push_back(que.front());
			que.pop_front();
		}
		vec.push_back(que.front());
		que.pop_front();
	}

	auto iter = vec.begin();

	if (1 == vec.size())
	{
		cout << "<" << vec[0] << ">";
		return 0;
	}

	for (iter; iter != vec.end(); ++iter)
	{
		if (iter == vec.begin())
			cout << "<" << *iter << ", ";
		else if (iter == vec.end() - 1)
			cout << *iter << ">";
		else
		{
			cout << *iter << ", ";
		}
	}

	return 0;
}