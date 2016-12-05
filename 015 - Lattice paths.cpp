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

typedef vector<LL> VI;
typedef vector<VI> VII;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	
	const clock_t begin = clock();
	///////////////
	const int NUM = 20;

	VII nums(NUM+1, VI(NUM+1));
	for(int i=0;i<NUM+1;i++){
		nums[0][i] = 1;
		nums[i][0] = 1;
	}
	for(int i=1;i<nums.size();i++){
		for(int j=1;j<nums[i].size();j++){
			nums[i][j]+=nums[i-1][j]+nums[i][j-1];
		}
	}
	cout<<nums[NUM][NUM]<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
