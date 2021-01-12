def bubbleSort(arr):
    n=len(arr)
    for i in range(n):
        mini=i
        for j in range(i+1,n):
            if(arr[j]<arr[mini]):
                mini=j
        arr[i],arr[mini]=arr[mini],arr[i]




n=int(input())

array=list(map(int,input().split(' ')[:n]))

print(array)

bubbleSort(array)

print(array)

