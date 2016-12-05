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
	vector<int> dic(10, 1);
	for(int i=2;i<10;i++){
		dic[i] = dic[i-1]*i;
	}
	
	int maxValue = 0;
	for(int i=2;;i++){
		int max1 = pow(10.0, i)-1;
		int max2 = dic[9]*i;
		maxValue = min(max1, max2);
		if(max1>max2)
			break;
	}
	for(int i=10;i<=maxValue;i++){
		int temp = i;
		int val = 0;
		while(temp){
			val+=dic[temp%10];
			temp/=10;
			if(val>i)
				break;
		}
		if(i==val){
			// cout<<i<<endl;
			ans+=i;
		}
		// string s;
		// stringstream ss(s);
		// ss<<i;
		// s = ss.str();
		// int val = 0;
		// for(int j=0;j<s.length();j++){
			// val+=dic[s[j]-'0'];
			// if(val>i)
				// break;
		// }
		// if(val==i){
			// cout<<i<<endl;
			// ans+=i;
		// }
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
