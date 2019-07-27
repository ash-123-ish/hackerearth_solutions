n,m=list(map(int,input().split(" ")))

l=list(map(int,input().split(" ")))

d={}

for i in l:

    c=abs(m-i)

    try:d[c].append(i)

    except:d[c]=[i]

f=list(d.keys())

f.sort()

c=0

fl=0

for i in f:

    k=d[i]

    k.sort(reverse=True)

    for j in k:

        print(j,end=" ")

        c+=1

        if(c==5):

            fl=5

            break

    if(fl==5):

        break