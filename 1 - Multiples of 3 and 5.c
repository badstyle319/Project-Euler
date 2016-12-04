#include <stdio.h>

int main(){

	int nums[1000] = {0};
	int i, ans=0;
	
	for(i=3;i<1000;i+=3)
		nums[i] = 1;
	for(i=5;i<1000;i+=5)
		nums[i] = 1;
	
	for(i=1;i<1000;i++)
		if(nums[i])
			ans+=i;
		
	printf("%d\n", ans);
	
	return 0;
}