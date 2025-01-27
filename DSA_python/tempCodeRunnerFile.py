arr = [2,51,5,2,5]
arr_temp = []
for i in range(0,len(arr)):
        arr_temp = arr[i+1:len(arr)]
        idx = arr_temp.index(min(arr_temp))
        if arr[idx] <= arr[i]:
            arr[i],arr[idx] = arr[idx],arr[i]#swaping the number
