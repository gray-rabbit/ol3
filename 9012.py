t = int(input())
def solve():
    st = []
    s = input()
    for c in s:
        if c=="(":
            st.append(c)
        else:
            if len(st):
                st.pop()
            else:
                return False
    
    return len(st) == 0

for _ in range(t):
    if solve():
        print("YES")
    else:
        print("NO")
