tests = int(raw_input())

for _ in range(tests):
    Count3 = 0
    games = int(raw_input())    
    for game in range(games): 
        piles = int(raw_input())
        arr = raw_input().split(' ')
        for ar in arr:
            if int(ar) % 4 == 3:
                Count3 +=1
    if Count3 % 2 == 0:
        print("Bob")
    else:
        print("Alice")