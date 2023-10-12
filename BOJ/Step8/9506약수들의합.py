while(1):
    tc = int(input())
    if tc == -1:
        break
    
    arr = []
    for i in range(1, tc):
        if tc % i == 0:
            arr.append(i)
    
    if sum(arr) == tc:
        print(tc, " = ", " + ".join(str(i) for i in arr), sep="")
    else:
        print(tc, "is NOT perfect.")