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
	LL ans = 0;
	int digit[10] = {1,0,2,4,3,5,6,7,8,9};
	do{
		if(digit[3]%2){
			for(int j=4;j<10;j++)
				if(digit[j]>digit[3] && digit[j]%2==0){
					swap(digit[j], digit[3]);
					sort(digit+4, digit+10);
					break;
				}
			if(digit[3]%2){
				if(digit[4]>digit[2]){
					swap(digit[4], digit[2]);
					sort(digit+3, digit+10);
				}
			}
		}
		if((digit[2]+digit[3]+digit[4])%3)
			continue;
		if(digit[5]%5)
			continue;
		if((digit[4]*100+digit[5]*10+digit[6])%7)
			continue;
		if((digit[5]*100+digit[6]*10+digit[7])%11)
			continue;
		if((digit[6]*100+digit[7]*10+digit[8])%13)
			continue;
		if((digit[7]*100+digit[8]*10+digit[9])%17)
			continue;
		LL val = 0;
		for(int i=0;i<10;i++)
			val = val*10+digit[i];
		// cout<<val<<endl;
		ans+=val;
	}while(next_permutation(digit, digit+10));
	cout<<ans<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
