/*
* @title    : 25206번 너의 평점은
* @content  : 심화1
* @author   : 박동연
* @date     : 230605
* @time     : 0ms
* @memory   : 2024KB
* @state    : 완료
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 전공평점은 전공과목별 (학점 × 등급평점)의 합을 학점의 총합으로 나눈 값이다.

	vector<string> vec;				// 과목명
	float fCredit = 0.f;			// 학점
	string cGrade = {};				// 등급평점
	float  fGrade = 0.f;			// 등급평점 소수형으로 치환

	float fScoreSum = 0.f;			// 점수 총합
	float fCreditSum = 0.f;			// 학점 총합


	for (int i = 0; i < 20; ++i)
	{
		string stTemp;
		cin >> stTemp >> fCredit >> cGrade;		// 과목명 >> 학점 >> 등급평점
		vec.push_back(stTemp);

		if ("A+" == cGrade)
			fGrade = 4.5f;
		else if ("A0" == cGrade)
			fGrade = 4.0f;
		else if ("B+" == cGrade)
			fGrade = 3.5f;
		else if ("B0" == cGrade)
			fGrade = 3.0f;
		else if ("C+" == cGrade)
			fGrade = 2.5f;
		else if ("C0" == cGrade)
			fGrade = 2.0f;
		else if ("D+" == cGrade)
			fGrade = 1.5f;
		else if ("D0" == cGrade)
			fGrade = 1.0f;
		else if ("F" == cGrade)
			fGrade = 0.0f;
		else
			continue;

		fScoreSum += fCredit * fGrade;
		fCreditSum += fCredit;
	}

	cout << fScoreSum / fCreditSum;

	return 0;
}