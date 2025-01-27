class Solution: 
    def selectionSort(self, arr):
        #code here
        
        for i in range(0,len(arr)):
            min_i = i
            for j in range(i+1,len(arr)):
                if arr[min_i] > arr[j]:
                    min_i = j
            if min_i != i:
                arr[i],arr[min_i] = arr[min_i],arr[i]#swaping the number
                