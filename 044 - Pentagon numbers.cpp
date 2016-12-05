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

bool isPentagon(int number){
	double temp = (sqrt(1+24*number)+1)/6;
	return temp == (int)temp;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	
	const clock_t begin = clock();
	///////////////
	vector<int> nums;
	int found = 0;
	for(int i=1;;i++){
		int n = i*(3*i-1)/2;
		nums.push_back(n);
		int last = nums.back();
		for(int j=nums.size()-2;j>=0;j--){
			if(isPentagon(last+nums[j]) && isPentagon(last-nums[j])){
				cout<<last-nums[j]<<endl;
				found = 1;
				break;
			}
		}
		if(found)
			break;
	}
	
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
