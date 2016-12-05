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
	vector<int> isPrime(10000, 1);
	isPrime[0] = 0;
	isPrime[0] = 0;
	for(int i=2;i<10000;i++)
		if(isPrime[i])
			for(int j=i+i;j<10000;j+=i)
				isPrime[j] = 0;
	for(int i=1001;i<10000;i+=2){
		if(isPrime[i]){
			string s1;
			stringstream ss1(s1);
			ss1<<i;
			s1 = ss1.str();
			sort(s1.begin(),s1.end());
			for(int j=2;i+2*j<10000;j+=2){
				if(isPrime[i+j] && isPrime[i+2*j]){
					string s2,s3;
					stringstream ss2(s2), ss3(s3);
					ss2<<(i+j);
					ss3<<(i+2*j);
					s2 = ss2.str();
					s3 = ss3.str();
					sort(s2.begin(),s2.end());
					sort(s3.begin(),s3.end());
					if(s1==s2 && s1==s3){
						cout<<i<<(i+j)<<(i+2*j)<<endl;
					}
				}
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
