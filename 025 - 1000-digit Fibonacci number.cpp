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

string strAdd(string str1, string str2){
	if(str1.length()<str2.length()){
		swap(str1, str2);
		str2.insert(0, str1.length()-str2.length(), '0');
	}
	int carry = 0;
	for(int i=str1.length()-1;i>=0;i--){
		int t = str1[i]-'0'+str2[i]-'0'+carry;
		str1[i] = t%10+'0';
		carry = t/10;
	}
	if(carry)
		str1.insert(0, 1, '1');
	return str1;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif
	
	const clock_t begin = clock();
	///////////////
	string f1="1", f2="1";
	for(int i=0;;i++){
		string t = strAdd(f1, f2);
		if(t.length()>=1000){
			cout<<i+3<<' '<<t<<endl;
			break;
		}
		f1 = f2;
		f2 = t;
	}
	///////////////
	cout<<fixed<<setprecision(3)<<float(clock()-begin)/CLOCKS_PER_SEC<<endl;
	
	#ifndef ONLINE_JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif 
	
	return 0;
}
