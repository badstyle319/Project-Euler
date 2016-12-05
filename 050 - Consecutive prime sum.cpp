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
	vector<int> isPrime(1000000, 1);
	isPrime[0] = 0;
	isPrime[1] = 0;
	for(int i=2;i<1000000;i++)
		if(isPrime[i])
			for(int j=i+i;j<1000000;j+=i)
				isPrime[j] = 0;
	vector<LL> sum(1, 0);
	for(int i=2;i<1000000;i++){
		if(isPrime[i]){
			LL t = sum.back()+i;
			if(t<1000000)
				sum.push_back(sum.back()+i);
			else
				break;
		}
	}
	LL ans=0, temp = 0;
	for(int i=sum.size()-1;i>=0;i--){
		for(int j=0;j<i;j++){
			LL dif = sum[i]-sum[j];
			if(isPrime[dif]){
				if((i-j)>temp){
					temp = i-j;
					ans = dif;
				}
			}
		}
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
