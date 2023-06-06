/*
* @title    : 4344번 평균은 넘겠지
* @content  : 심화1
* @author   : 박동연
* @date     : 230605
* @time     : 4ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int iCaseNum = 0;
	int iStudentNum = 0;
	int iSum = 0;
	float iAverage = 0.f;
	vector<int> vec;

	cin >> iCaseNum;

	for (int i = 0; i < iCaseNum; ++i)
	{
		vec.clear();
		int iGoodStudent = 0;
		iSum = 0;
		iAverage = 0.f;
		cin >> iStudentNum;
		for (int j = 0; j < iStudentNum; ++j)
		{
			int iTemp = 0;
			cin >> iTemp;
			vec.push_back(iTemp);
		}
		vector<int>::iterator iter = vec.begin();
		for (iter; iter != vec.end(); ++iter)
		{
			iSum += *iter;
		}
		
		iter = vec.begin();
		for (iter; iter != vec.end(); ++iter)
		{
			if (*iter > (iSum / vec.size()))
			{
				++iGoodStudent;
			}
		}

		cout << fixed;
		cout.precision(3);
		iAverage = (float(iGoodStudent * 100) / (float)vec.size());
		cout << iAverage << "%" << "\n";
	}

	return 0;
}