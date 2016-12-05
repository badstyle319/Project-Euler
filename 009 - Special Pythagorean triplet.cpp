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
	map<int,int> dic;
	for(int i=1;i<=997;i++)
		dic[i] = i*i;
	for(int a=1;a<=332;a++){
		for(int b=a+1;b<=499, (1000-a-b)>b;b++){
			int c=1000-a-b;
			if(a*a+b*b==c*c){
				//cout<<a<<' '<<b<<' '<<c<<endl;
				cout<<a*b*c<<endl;
			}
		}
	}
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
