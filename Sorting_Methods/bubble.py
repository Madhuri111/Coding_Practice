
def bubbleSort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if(arr[j]>arr[j+1]):
                print();
                arr[j],arr[j+1]=arr[j+1],arr[j]


n=int(input())

array=list(map(int,input().split(' ')[:n]))

print(array)

bubbleSort(array)
print(array)
