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
	map<int,int> ans;
	int result = 0;
	for(int i=1;i<=98;i++){
		int len = 0;
		int num = i;
		while(num){
			len++;
			num/=10;
		}
		int lowerBound=123, upperBound=987;
		if(len==1){
			lowerBound = 1;
			upperBound = 9876;
		}
		for(int j=lowerBound;j<=upperBound;j++){
			string temp;
			stringstream ss(temp);
			ss<<i<<j<<i*j;
			temp = ss.str();
			
			vector<int> check(10, 0);
			for(int k=0;k<temp.length();k++){
				check[temp[k]-'0']+=1;
			}
			if(!check[0]){
				int legal = 1;
				for(int k=1;k<check.size();k++){
					if(check[k]!=1){
						legal = 0;
						break;
					}
				}
				if(legal){
					int t = i*j;
					if(ans.count(t)==0)
						result+=t;
					ans[t] = 1;
					// cout<<i<<" * "<<j<<" = "<<i*j<<endl;
				}
			}
		}
	}
	cout<<result<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
