def solve(s, l, r, ans, m, indx):
    global check
    if indx == m:
        j = 0
        for i in range(len(s)):
            if j < m and s[i] == ans[j]:
                j += 1
        if j != m:
            check = True
        return
    for i in range(int(l[indx]), int(r[indx]) + 1):
        ans.append(str(i))
        solve(s, l, r, ans, m, indx + 1)
        ans.pop()

t = int(input())
while t > 0:
    s = input()
    m = int(input())
    l, r = input().split()
    check = False
    ans = []
    solve(s, l, r, ans, m, 0)
    if check:
        print("YES")
    else:
        print("NO")
    t -= 1
