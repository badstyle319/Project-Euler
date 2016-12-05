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

int d(int val){
	int rv = 0;
	for(int i=1;i<=(int)sqrt((double)val);i++){
		if(val%i==0){
			int t = val/i;
			if(t!=i)
				rv+=t+i;
			else
				rv+=i;
		}
	}
	return (rv-val);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	
	const clock_t begin = clock();
	///////////////
	LL ans=0;
	vector<int> abundant;
	for(int i=1;i<=28123;i++){
		int t = d(i);
		if(t>i)
			abundant.push_back(i);
	}
	
	vector<int> temp(28124, 0);
	for(int i=0;i<abundant.size();i++){
		for(int j=i;j<abundant.size();j++){
			int t = abundant[i]+abundant[j];
			if(t<28124)
				temp[t] = 1;
			else
				break;
		}
	}
	for(int i=1;i<=28123;i++)
		if(!temp[i])
			ans+=i;
	cout<<ans<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
