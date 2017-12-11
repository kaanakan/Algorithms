n,k=map(int,raw_input().split())
lst=map(int,raw_input().split())
gereken=input()
temp=lst[k]
lst[k]=0
sums=sum(lst)/2
toplam=sums
if gereken==toplam:
    print "Bon Appetit"
else:
    print temp/2
