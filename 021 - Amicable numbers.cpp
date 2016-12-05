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
	cout<<d(100)<<endl;
	int ans=0;
	map<int,int> amicable;
	for(int i=2;i<10000;i++){
		if(amicable.count(i)==0){
			int t = d(i);
			if(t<10000 && d(t)==i && t!=i){
				ans+=t+i;
				amicable[i] = t;
				amicable[t] = i;
				cout<<i<<' '<<t<<endl;
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
