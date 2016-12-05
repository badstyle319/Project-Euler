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
	vector<int> primes(2000000, 1);
	LL answer = 0;

	for(int i=2;i<primes.size();i++)
		if(primes[i])
			for(int j=i+i;j<primes.size();j+=i)
				primes[j] = 0;

	for(int i=2;i<primes.size();i++)
		if(primes[i])
			answer+=i;
	cout<<answer<<endl;
	///////////////
	cout.setf(ios::fixed);
	cout.precision(3);
	cout<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
