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
	int ans = 0;
	for(int i=2;;i++){
		string s;
		stringstream ss(s);
		ss<<i;
		s = ss.str();
		int sum = 0;
		for(int j=0;j<s.length();j++){
			sum+=pow((double)(s[j]-'0'), 5);
		}
		if(i==sum){
			// cout<<i<<endl;
			ans+=sum;
		}
		if(i>pow(9.0, 5)*s.length())
			break;
	}
	cout<<ans<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
