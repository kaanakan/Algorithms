a = input()
dd = {}
for i in range(a):
    tmp = raw_input()
    if tmp not in dd:
        print "OK"
        dd[tmp] = 1
    else:
        print tmp + str(dd[tmp])
        dd[tmp] += 1
