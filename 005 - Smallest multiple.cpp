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
	const int target = 20;
	vector<int> primes(target+1, 1);
	for(int i=2;i<=target;i++)
		if(primes[i])
			for(int j=i+i;j<=target;j+=i){
				primes[j] = 0;
			}
	map<int,int> dic;
	for(int i=2;i<=target;i++){
		if(primes[i]){
			float d = 1;
			while(pow(i, d)<target)
				d+=1;
			dic[i] = d-1;
		}
	}
	int answer = 1;
	for(map<int,int>::iterator it = dic.begin();it!=dic.end();it++){
		int t = it->second;
		while(t-->0)
			answer*=it->first;
	}
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
