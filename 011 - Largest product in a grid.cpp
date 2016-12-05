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
	const int conseq = 4;
	int nums[20][20], answer = 0;
	for(int i=0;i<20;i++)
		for(int j=0;j<20;j++){
			string temp;
			cin>>temp;
			nums[i][j] = atoi(temp.c_str());
		}

	for(int i=0;i<20;i++){
		for(int j=0;j<(20-conseq+1);j++){
			int product = 1;
			for(int k=0;k<conseq;k++){
				product*=nums[i][j+k];
			}
			answer = max(answer, product);
		}
	}

	for(int i=0;i<(20-conseq+1);i++){
		for(int j=0;j<20;j++){
			int product = 1;
			for(int k=0;k<conseq;k++)
				product*=nums[i+k][j];
			answer = max(answer, product);
		}
	}

	for(int i=0;i<(20-conseq+1);i++){
		for(int j=0;j<(20-conseq+1);j++){
			int product = 1;
			for(int k=0;k<conseq;k++)
				product*=nums[i+k][j+k];
			answer = max(answer, product);
		}
	}

	for(int i=conseq-1;i<20;i++){
		for(int j=0;j<(20-conseq+1);j++){
			int product = 1;
			for(int k=0;k<conseq;k++)
				product*=nums[i-k][j+k];
			answer = max(answer, product);
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
