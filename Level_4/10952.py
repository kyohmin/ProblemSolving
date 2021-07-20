while True:
    try:
        f,s = input().split()
        f,s = int(f), int(s)
        print(f+s)
    except:
        break