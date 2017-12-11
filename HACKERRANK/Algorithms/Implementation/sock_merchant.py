n = int(raw_input().strip())
c = map(int,raw_input().strip().split(' '))
a=set(c)
sum=0
for i in a:
	sum=sum+c.count(i)/2
print sum	
