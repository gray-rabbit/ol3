n = int(input())
st = []
for _ in range(n):
    val = int(input())
    if val==0:
        st.pop()
    else:
        st.append(val)

print(sum(st))        