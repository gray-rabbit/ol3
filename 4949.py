while True:
    s = input()
    if s == ".":
        break
    ###해결책을 작성하자!!!
    st = []
    for c in s: #문자열에서 문자 하나씩을 꺼낸다!
        #만약 c가 ( [ 면 스택에 넣는다.
        if c=="(" or c=="[":
            st.append(c)
        #만약 c가 ) ] 면 다음 조건을 봐야한다. 

        elif c==")" or c=="]":
            #스택이 비었다면 no!
            if len(st)==0: 
                st.append("c")
                break
            #스택의 맨 위가 (인데 c가 ]라면 no!
            elif st[-1] == "(" and c=="]":
                break
            #스택의 맨 위가 [인데 c가 )라면 no!
            elif st[-1] =="[" and c==")":
                break
            else:
                st.pop()
    
    if len(st)!=0:
        print("no")
    else:
        print("yes")




