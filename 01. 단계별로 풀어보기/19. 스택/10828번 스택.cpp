/*
* @title    : 10828번 스택
* @content  : 스택
* @author   : 박동연
* @date     : 230710
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	string strCmd;
	int iTemp;

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		strCmd.clear();
		int iTemp = 0;
		cin >> strCmd;

		if ("push" == strCmd)
		{
			cin >> iTemp;
			vec.push_back(iTemp);
		}
		else if ("pop" == strCmd)
		{
			if (vec.empty())
				cout << -1 << "\n";
			else
			{
				cout << vec.back() << "\n";
				vec.pop_back();
			}
		}
		else if ("size" == strCmd)
		{
			cout << vec.size() << endl;
		}
		else if("empty" == strCmd)
		{
			if (vec.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if ("top" == strCmd)
		{
			if (vec.empty())
				cout << -1 << "\n";
			else
			{
				cout << vec.back() << "\n";
			}
		}
	}

	return 0;
}