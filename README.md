# 2D-Mergesort-row-wise-and-column-wise-
Implement merge sort for a two-dimensional array. In case of odd dimension, the first division contains more number of elements than the second one. The complete execution of merge sort arranges the elements in increasing order either moving row-wise or column-wise.

For example, let there be a 4×4 two dimensional array. The complete process to be implemented is illustrated in Fig. 1. Similarly, Fig. 2 demonstrates the scenario for a 3×3 two dimensional array. One has to keep on dividing till a single element is remaining. During merging, first the row elements get sorted in increasing order followed by sorting of elements lying in the same column.

![Picture1](https://user-images.githubusercontent.com/77425836/120359888-cf0eec00-c325-11eb-99de-f3f725ee49dd.jpg)
Fig.1 - 2D Mergesort on a 4×4 two dimensional array.

![Picture2](https://user-images.githubusercontent.com/77425836/120360058-f82f7c80-c325-11eb-8f5b-5d99443c3ad8.jpg)
Fig.2 - 2D Mergesort on a 3×3 two dimensional array.

Input:
Line 1 contains two space separated integers M and N, i.e. the size of two dimensional array.
Line 2 contains M∗N unique integers separated by space. These are the contents of a two dimensional array in row-major order.

Output:
Line 1 is space separated M∗N integers sequence. These are the final contents of a two dimensional array in row-major order.

Sample Input 1:
4 4
18 4 16 8 23 13 20 11 28 24 26 25 1 30 15 19
Sample Output 1:
1 8 16 18 4 13 19 23 11 15 20 28 24 25 26 30

Sample Input 2:
3 3
18 9 11 1 4 15 13 23 20
Sample Output 2:
1 4 11 9 15 18 13 20 23
