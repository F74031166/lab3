1.


g++ lab3.cpp -o lab3

2.

N=1000000
sort(): 0.04 seconds
v1/v2 are different.
insertion_sort(): 12820.64 seconds
v1/v2 are the same.

N=100000
sort(): 0.04 seconds
v1/v2 are different.
insertion_sort(): 128.24000 seconds
v1/v2 are the same.

N=10000
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 1.28 seconds
v1/v2 are the same.
 
N=1000
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0.01 seconds
v1/v2 are the same.


Time Complexity
sort()=O(nlog(n))
insertion_sort()=O(n^2)
