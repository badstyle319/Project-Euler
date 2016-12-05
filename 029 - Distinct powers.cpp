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

bool isPrime(int value){
	if(value<2)
		return false;
	for(int i=2;i<=sqrt((double)value);i++)
		if(value%i==0)
			return false;
	return true;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	
	const clock_t begin = clock();
	///////////////
	const int SIZE = 100;
	
	map<int,int> dic;
	for(int i=2;i<=sqrt((double)SIZE);i++){
		int t=i*i;
		while(t<=SIZE){
			if(dic.count(t)==0)
				dic[t] = i;
			t*=i;
		}
	}
	// for(map<int,int>::iterator it = dic.begin();it!=dic.end();it++)
		// cout<<it->first<<' '<<it->second<<endl;

	vector< map<int,int> > nums(SIZE+1, map<int,int>());
	for(int a=2;a<=SIZE;a++){
		for(int b=2;b<=SIZE;b++){
			if(dic.count(a)){
				int cnt = 0;
				int temp = a;
				while(temp!=1){
					temp/=dic[a];
					cnt++;
				}
				nums[dic[a]][cnt*b] = 1;
			}else{
				nums[a][b] = 1;
			}
		}
	}
	int ans = 0;
	for(int i=2;i<=SIZE;i++){
		ans+=nums[i].size();
		// cout<<i<<":";
		// for(map<int,int>::iterator it = nums[i].begin();it!=nums[i].end();it++){
			// cout<<' '<<it->first;
		// }
		// cout<<endl;
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
