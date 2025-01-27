
class Solution:
    #Function to sort the array using bubble sort algorithm.
    def bubbleSort(self,arr):
        # code here
        active = True
        while active:
            active = False
            for i in range(len(arr)-1):
                if arr[i] > arr[i+1]:
                    arr[i] , arr[i+1] = arr[i+1] , arr[i]
                    active = True