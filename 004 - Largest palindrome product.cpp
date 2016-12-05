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
	int answer = 0;
	for(int i=999;i>=100;i--){
		for(int j=999;j>=100;j--){
			int num = i*j;
			char buffer[8];
			sprintf(buffer, "%d", num);
			string strNum = buffer;
			int isPalindrome = 1;
			for(int m=0,n=strNum.length()-1;m<n;m++,n--){
				if(strNum[m]!=strNum[n]){
					isPalindrome = 0;
					break;
				}
			}
			if(isPalindrome)
				answer = max(answer, num);
		}
	}
	cout<<answer<<endl;
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
