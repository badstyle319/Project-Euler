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
	const int SIZE = 10;
	vector<int> nums;
	for(int i=0;i<SIZE;i++)
		nums.push_back(i);
	
	int cnt = 0;
	do{
		cnt++;
		if(cnt==1000000){
			for(int i=0;i<nums.size();i++)
				cout<<nums[i];
			cout<<endl;
			break;
		}
	}while(next_permutation(nums.begin(), nums.end()));
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
