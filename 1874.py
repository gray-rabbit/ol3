n = int(input())
st = []
t =  []
for _ in range(n):
    t.append(int(input()))

idx =0  #idx는 내가 찾아야할 수의 인덱스 번호!
ans = []
for i in range(1, n+1):
    #i는 넣을 수
    #1. 일단 넣는다!
    st.append(i)
    ans.append("+")
    #2. 아까 로직!!! 스택의 맨위와 내가 찾아야할 수가 같다면 팝!
    while st and st[-1] == t[idx]:
        st.pop()
        ans.append("-")
        idx+=1


if len(st)==0:
    print(*ans, sep="\n")
else:
    print('NO')
