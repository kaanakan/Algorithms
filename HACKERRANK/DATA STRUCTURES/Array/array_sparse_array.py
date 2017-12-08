x = input()
dd = {}
for i in range(x):
    tmp = raw_input()
    try:
        dd[tmp] += 1
    except:
        dd[tmp] = 1
y = input()
for i in range(y):
    tmp = raw_input()
    try:
        print dd[tmp]
    except:
        print 0
