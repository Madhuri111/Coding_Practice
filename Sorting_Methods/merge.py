def mergeSor(arr):
    if(len(arr))>1:
        mid=len(arr)//2
        L=arr[:mid]
        R=arr[mid:]
        mergeSor(L)
        mergeSor(R)
        
        i=j=k=0

        while i<len(L) and j < len(R):
            if L[i]<R[i]:
                arr[k]=L[i]
                i+=1
            else:
                arr[k]=R[j]
                j+=1
            k+=1

        while i<len(L):
            arr[k]=L[i]
            i+=1
            k+=1
        while j<len(R):
            arr[k]=R[j]
            j+=1
            k+=1


if __name__ == '__main__':
    arr=[5,6,1,2,3,4]
    print(arr)
    mergeSor(arr)
    print(arr)
