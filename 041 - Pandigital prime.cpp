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
	const int SIZE = 7654322;
	
	vector<int> isPrime(SIZE, 1);
	isPrime[0] = 0;
	isPrime[1] = 0;
	for(int i=2;i<SIZE;i++){
		if(isPrime[i])
			for(int j=i+i;j<SIZE;j+=i)
				isPrime[j] = 0;
	}
	for(int i=SIZE-1;i>=2;i--){
		if(isPrime[i]){
			string s;
			stringstream ss(s);
			ss<<i;
			s = ss.str();
			map<int,int> dic;
			for(int j=0;j<s.length();j++){
				int t=s[j]-'0';
				if(!t || t>s.length())
					break;
				dic[t] = 1;
			}
			if(dic.size()==s.length()){
				cout<<i<<endl;
				break;
			}
		}
	}
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
