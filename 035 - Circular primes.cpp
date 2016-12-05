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
	for(int i=2;i<isPrime.size();i++)
		if(isPrime[i])
			for(int j=i+i;j<isPrime.size();j+=i)
				isPrime[j] = 0;
	
	int ans = 0;
	for(int i=2;i<isPrime.size();i++){
		if(isPrime[i]){
			if(i<10){
				ans++;
				continue;
			}
			int temp = i, legal = 1;
			int len = 1, p=10;
			while(temp%p!=temp){
				p*=10;
				len++;
			}
			p/=10;
			do{
				int t = temp/p;
				temp%=p;
				temp = temp*10+t;
				if(temp<p){
					legal = 0;
					break;
				}
				if(!isPrime[temp]){
					legal = 0;
					break;
				}
			}while(temp!=i);
			if(legal){
				// cout<<i<<endl;
				ans++;
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
