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

bool isLeapYear(int year){
	if((year%4==0 && year%100) || year%400==0){
		// cout<<year<<' '<<true<<endl;
		return true;
	}
	else{
		// cout<<year<<' '<<false<<endl;
		return false;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	
	const clock_t begin = clock();
	///////////////
	int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int init=0, ans=0;
	for(int i=1900;i<=2000;i++){
		if(isLeapYear(i))
			days[1] = 29;
		else
			days[1] = 28;
		for(int j=0;j<12;j++){
			if(init==6 && i>1900){
				// cout<<i<<' '<<j+1<<endl;
				ans++;
			}
			init+=days[j]%7;
			init%=7;
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
