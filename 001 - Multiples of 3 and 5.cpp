#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>

#define LL long long
#define ULL unsigned long long

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	const clock_t begin = clock();
	///////////////
	int sum = 0;
	for (int i = 1; i < 1000; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	cout << sum << endl;
	///////////////
	cout.setf(ios::fixed);
	cout.precision(3);
	cout << float(clock() - begin) / CLOCKS_PER_SEC << endl;

#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
#endif

	return 0;
}
