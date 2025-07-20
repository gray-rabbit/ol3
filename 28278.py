import sys
input = sys.stdin.readlin

n = int(input())
st = []
for _ in range(n):
    l = list(map(int, input().split()))

    if l[0] == 1:
        st.append(l[1])
    elif l[0] == 2:
        if len(st)!=0:
            print(st.pop())
        else:
            print(-1)