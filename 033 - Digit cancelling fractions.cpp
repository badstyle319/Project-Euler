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

int gcd(int a, int b){
	if(a<b)
		return gcd(b, a);
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	
	const clock_t begin = clock();
	///////////////
	int numerator = 1, denominator = 1;
	for(int i=1;i<10;i++){
		for(int j=i+1;j<10;j++){
			// cout<<i<<"/"<<j<<endl;
			for(int k=i;k<10;k++){
				int tn = i*10+k;
				int td = 10*k+j;
				if((float)tn/td==(float)i/j){
					numerator*=i;
					denominator*=j;
					// cout<<tn<<"/"<<td<<" = "<<i<<"/"<<j<<endl;
				}
			}
		}
	}
	cout<<denominator/gcd(numerator, denominator)<<endl;
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
