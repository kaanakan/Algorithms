def getRecord(s):
    most=s[0]
    least=s[0]
    good=0
    bad=0
    for i in s:
        if i>most:
            most=i            
            good += 1
        elif i<least:
            least=i
            bad += 1
    return [good,bad]
n = int(raw_input().strip())
s = map(int, raw_input().strip().split(' '))
result = getRecord(s)
print " ".join(map(str, result))
