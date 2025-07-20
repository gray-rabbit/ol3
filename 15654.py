n, m = map(int, input().split())

l = list(map(int, input().split()))
l.sort()

ans = []


def recu(k):
    if len(ans) >= m:
        print(*ans)
        return
    # 1.리스트에서 내꺼 하나 고른다!
    for i in range(n):
        if l[i] == -1:
            continue
        ans.append(l[i])
        l[i] = -1  # 이미 골랐다는 표시
        recu(i + 1)  # 다음 고르셈!
        l[i] = ans.pop()


recu(0)
