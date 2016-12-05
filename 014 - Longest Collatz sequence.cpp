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
	vector<int> nums(1000000,0);
	nums[1] = 1;
	LL num, ans=0, ansNum;
	for(LL i=2;i<1000000;i++){
		int len=1;
		if(!nums[i]){
			num = i;
			while(num!=1){
				if(num%2)
					num=num*3+1;
				else
					num/=2;
				if(num<1000000 && nums[num]){
					len+=nums[num];
					nums[i] = len;
					break;
				}
				len++;
			}
		}
		if(len>ans){
			ans = len;
			ansNum = i;
		}
	}
	cout<<ansNum<<endl;
	///////////////
	cout.setf(ios::fixed);
	cout.precision(3);
	cout<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
