/*
* @title    : 1966번 프린터 큐(실버 3)
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
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	// 페어<중요도, M번 째 수>
	deque<pair<int, int>> que;

	int T = 0;	// 테스트 케이스 개수
	int N = 0;	// 문서의 개수
	int M = 0;	// 몇 번째로 인쇄되었는지 궁금한 문서가
				// 현재 몇 번째에 놓여있는지
	int imp = 0;
	int max = 0;
	int count = 0;

	// 테스트 케이스 입력
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		que.clear();
		count = 0;

		// 문서의 개수와 궁금해하는 문서의 위치M 입력
		cin >> N >> M;

		for (int i = 0; i < N; ++i)
		{
			cin >> imp;
			que.push_back({ imp, i });
		}

		max = max_element(que.begin(), que.end())->first;

		while (true)
		{
			// 중요도가 가장 높은 경우를 만나 인쇄를 하는 경우
			// 그중에서 본인이 원하는 경우가 나왔을 경우
			if (que[0].first == max && que[0].second == M)
			{
				que.pop_front();
				++count;
				break;
			}
			// 가장 높은 경우를 만나 인쇄를 하는 경우
			else if (que[0].first == max)
			{
				que.pop_front();
				++count;
				max = max_element(que.begin(), que.end())->first;
			}
			// 중요도가 낮은 문서를 만나 인쇄를 하지 않는 경우
			else
			{
				que.push_back(que.front());
				que.pop_front();
			}
		}

		cout << count << "\n";
	}

	return 0;
}