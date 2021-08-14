days = int(raw_input())

for _ in range(days):
    shells, meat, rice, beans = raw_input().split()
    s = int(shells)
    m = int(meat)
    r = int(rice)
    b = int(beans)
    print(min(s,min((b + m + r) / 2,(b + m + r - max(b,m,r)))))