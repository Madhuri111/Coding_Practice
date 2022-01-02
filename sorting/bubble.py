def bubble_sort(arr):
    for i in range(len(arr) - 1):
        swapped = False
        for j in range(0, len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            return
 
n=int(input())

arr=list(map(int,input().split(' ')[:n]))
bubble_sort(arr)
print('Sorted list: ', end='')
print(arr)