/*
* @title    : 9506번 약수의 합
* @content  : 일반 수학1
* @author   : 박동연
* @date     : 230704
* @time     : 0ms
* @memory   : 2020KB
* @state    : 완료
*/

#include <iostream>

#include <vector>

using namespace std;

int main()
{
	int n = 0;
	int sum = 0;

	vector<int> vec;

	while (-1 != n)
	{
		vector<int>().swap(vec);
		vec.clear();

		sum = 0;
		cin >> n;
		if (-1 == n)
			break;
		for (int i = n - 1; i > 0; --i)
		{
			if (0 == n % i)
				vec.push_back(i);
		}
		for (int j = 0; j < vec.size(); ++j)
		{
			sum += vec[j];
		}

		if (sum != n)
			cout << n << " is NOT perfect.";
		
		else
		{
			cout << n << " = ";
			for (int k = vec.size() - 1; k >= 0; --k)
			{
				if (k == 0)
					cout << vec[k];
				else
					cout << vec[k] << " + ";
			}
		}
		cout << endl;
	}

	return 0;
}