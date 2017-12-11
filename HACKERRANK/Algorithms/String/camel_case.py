s = raw_input().strip()
sum=1
for i in range(len(s)):
	if s[i].isupper()==True:
		sum=sum+1
print sum
