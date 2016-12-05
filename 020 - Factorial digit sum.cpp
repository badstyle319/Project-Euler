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
	string temp="1";
	for(int i=2;i<=100;i++){
		int carry = 0;
		for(int j=temp.length()-1;j>=0;j--){
			int t=(temp[j]-'0')*i+carry;
			temp[j] = t%10+'0';
			carry = t/10;
		}
		while(carry){
			temp.insert(0, 1, carry%10+'0');
			carry/=10;
		}
		cout<<i<<"! "<<temp<<endl;
	}
	int ans = 0;
	for(int i=0;i<temp.length();i++)
		ans+=temp[i]-'0';
	cout<<ans<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
