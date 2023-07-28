# 2D Array - Hourglass Sum

### Given a 6x6 2D Array, [arr]:

<pre>
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
</pre>

An hourglass in  is a subset of values with indices falling in this pattern in 's graphical representation:

<pre>
a b c
  d
e f g
</pre>

There are 16 hourglasses in arr. An hourglass sum is the sum of an hourglass' values. Calculate the hourglass sum for every hourglass in arr, then print the maximum hourglass sum. The array will always be 6x6.

<pre>
Example:

-9 -9 -9  1 1 1 
 0 -9  0  4 3 2
-9 -9 -9  1 2 3
 0  0  8  6 6 0
 0  0  0 -2 0 0
 0  0  1  2 4 0
</pre>

The  hourglass sums are:

<pre>
-63, -34, -9, 12, 
-10,   0, 28, 23, 
-27, -11, -2, 10, 
  9,  17, 25, 18  
</pre>

The highest hourglass sum is 28 from the hourglass beginning at row 1, column 2:

<pre>
0 4 3
  1
8 6 6
</pre>
