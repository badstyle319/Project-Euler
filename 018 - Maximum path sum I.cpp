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
	const int SIZE = 15;
	
	vector< vector<int> > nums;
	for(int i=1;i<=SIZE;i++){
		nums.push_back(vector<int>(i));
		for(int j=0;j<i;j++){
			cin>>nums[i-1][j];
		}
	}
	// for(int i=0;i<nums.size();i++){
		// for(int j=0;j<nums[i].size();j++)
			// cout<<nums[i][j]<<' ';
		// cout<<endl;
	// }
	int ans=0;
	for(int i=1;i<nums.size();i++){
		for(int j=0;j<nums[i].size();j++){
			if(j==0)
				nums[i][j]+=nums[i-1][j];
			else if(j==nums[i].size()-1)
				nums[i][j]+=nums[i-1][j-1];
			else
				nums[i][j]+=max(nums[i-1][j], nums[i-1][j-1]);
			if(i==nums.size()-1)
				ans = max(ans, nums[i][j]);
		}
	}
	// for(int i=0;i<nums.size();i++){
		// for(int j=0;j<nums[i].size();j++)
			// cout<<nums[i][j]<<' ';
		// cout<<endl;
	// }
	cout<<ans<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
