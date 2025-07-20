n = int(input())
ans = []
def recu(start, mid, end, n):
    #start는 출발점
    #mid는 경유지
    #end는 목적지
    #n는 원탑의 갯수
    if n==1:
        ans.append((start,end))
        return
    recu(start, end, mid, n-1)
    ans.append((start,end))
    recu(mid, start, end, n-1)

recu(1,2,3,n)

for c in ans:
    print(*c)


