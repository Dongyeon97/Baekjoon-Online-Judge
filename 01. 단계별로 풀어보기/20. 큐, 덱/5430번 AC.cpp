﻿/*
* @title    : 5430번 AC(골드 5)
* @content  : 큐, 덱
* @author   : 박동연
* @date     : 230713
* @time     : 56ms
* @memory   : 3444KB
* @state    : 완료

*/
#include <iostream>
#include <sstream>
#include <string>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T;

	for (int i = 0; i < T; ++i) {
		string function, strArray, token;
		int size;
		cin >> function >> size >> strArray;

		// 문자열에서 대괄호를 없앱니다.
		strArray.assign(strArray.begin() + 1, strArray.end() - 1);

		stringstream ss;
		ss.str(strArray);

		// 배열을 파싱합니다.
		deque<int> dq;
		while (getline(ss, token, ',')) {
			dq.push_back(stoi(token));
		}

		bool isReversed = false;
		bool isError = false;
		for (char cmd : function) {
			if (cmd == 'R') { isReversed = !isReversed; }

			else if (cmd == 'D') {
				if (dq.empty()) { isError = true; break; }

				// 정수 배열이 뒤집어진 상태인 경우, 뒤에 있는 원소를 삭제합니다.
				else if (isReversed == true) { dq.pop_back(); }

				// 정수 배열이 뒤집어지지 않은 상태인 경우, 앞에 있는 원소를 삭제합니다.
				else if (isReversed == false) { dq.pop_front(); }
			}
		}

		// AC가 오류인 경우
		if (isError) { cout << "error\n";  continue; }

		// 정수 배열을 출력합니다.
		if (isReversed) { reverse(dq.begin(), dq.end()); }
		cout << "[";
		for (unsigned int i = 0; i < dq.size(); ++i) {
			if (i == dq.size() - 1) { cout << dq[i]; }
			else { cout << dq[i] << ","; }
		}
		cout << "]\n";
	}
	return 0;
}