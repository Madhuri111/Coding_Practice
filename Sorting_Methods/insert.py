def bubbleSort(arr):
    n=len(arr)
    for i in range(n):
        j=i-1
        key=arr[i]
        while j>=0 and arr[j]>key:
            arr[j+1]=arr[j];
            j=j-1
        arr[j+1]=key




n=int(input())

array=list(map(int,input().split(' ')[:n]))

print(array)

bubbleSort(array)

print(array)

