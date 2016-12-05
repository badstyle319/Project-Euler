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

bool isTriangle(int num){
	num*=2;
	int t = sqrt((double)num);
	return t*(t+1)==num;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	
	const clock_t begin = clock();
	///////////////
	string temp, item;
	cin>>temp;
	stringstream ss(temp);
	// vector<string> strs;
	int ans=0;
	while(getline(ss, item, ',')){
		item.erase(0, item.find_first_not_of('"'));
		item.erase(item.find_last_not_of('"')+1);
		int val=0;
		for(int i=0;i<item.length();i++)
			val+=item[i]-'A'+1;
		if(isTriangle(val))
			ans++;
		// strs.push_back(item);
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
