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
	int ans = 0, val = 0;
	for(int i=2;i<1000;i++){
		int remainder=1;
		map<int,int> dic;
		while(remainder){
			remainder*=10;
			int t = remainder%i;
			dic[remainder]+=1;
			if(dic[remainder]>2)
				break;
			remainder = t;
		}
		int temp = 0;
		for(map<int,int>::iterator it=dic.begin();it!=dic.end();it++){
			if(it->second>1)
				temp++;
		}
		if(temp>val){
			val = temp;
			ans = i;
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
