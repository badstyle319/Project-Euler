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
	const int TARGET = 200;
	int coins[] = {1, 2, 5, 10, 20, 50, 100, 200};
	vector<int> ans(200+1, 0);
	ans[0] = 1;
	for(int i=0;i<8;i++){
		for(int j=coins[i];j<=TARGET;j++){
			ans[j] += ans[j-coins[i]];
		}
	}
	// for(int i=1;i<=200;i++){
		// cout<<i<<' '<<ans[i]<<endl;
	// }
	cout<<ans[200]<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
