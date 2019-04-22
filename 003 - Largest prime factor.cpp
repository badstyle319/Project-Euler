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
	double num = 600851475143;
	int val = sqrt(num);
	int *primes = new int[val + 1];
	memset(primes, 1, val);
	for (int i = 2; i <= val; i++)
		if (primes[i])
			for (int j = i + i; j <= val; j += i)
				primes[j] = 0;
	for (int i = val; i >= 2; i--)
		if (primes[i] && fmod(num, i) == 0)
		{
			cout << i << endl;
			break;
		}

	delete[] primes;
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
