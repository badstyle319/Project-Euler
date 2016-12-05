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
	string temp, item;
	cin>>temp;
	stringstream ss(temp);
	vector<string> strs;
	while(getline(ss, item, ',')){
		item.erase(0, item.find_first_not_of('"'));
		item.erase(item.find_last_not_of('"')+1);
		strs.push_back(item);
	}
	sort(strs.begin(), strs.end());
	int ans = 0;
	for(int i=0;i<strs.size();i++){
		int val = 0;
		for(int j=0;j<strs[i].length();j++)
			val+=strs[i][j]-'A'+1;
		ans+=val*(i+1);
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
