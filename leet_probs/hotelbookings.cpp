Solution approach :

1. Create event points for every interval start, and end. 
2. Sort it according to the day. 
3. Now, iterate over them one by one. If you encounter a start, then the number of active guests increase by one. If you encounter an end, the number of active guests decrease by one. 
4. If at any point, the number of active guests exceed K, we know that scheduling is not possible. 

GOTCHAS : What if there are multiple start and end on the same day ? How should they be ordered ?

