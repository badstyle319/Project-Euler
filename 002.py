num1=0
num2=1
sum=0

n=num1+num2
while n<=4000000:
	if n%2==0:
		sum+=n
	num1=num2
	num2=n
	n=num1+num2
print(sum)