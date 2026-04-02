## Problem - 01 : write pattern program to print this :
<pre>11111 
11111
11111
11111
11111</pre>

## Problem - 02 : write pattern program to print this :
<pre>12345 
12345
12345
12345
12345</pre>

## Problem - 03 : write pattern program to print this :
<pre>1   2   3   4   5  
6   7   8   9   10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25 
21  22  23  24  25 </pre>

## Problem - 04 : write pattern program to print this :
<pre>
* 
* *
* * *
* * * *
* * * * *
* * * * * *</pre>

## Problem - 05 : write pattern program to print this :
<pre>
a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e</pre>

## Problem - 06 : write pattern program to print this :
<pre>
    *
   ***
  *****
 *******
*********</pre>

## Problem - 07 : write pattern program to print this :
<pre>
    * 
   * *
  * * *
 * * * *
* * * * *</pre>

## Problem - 08 : write pattern program to print this :

### This pattern is called the Butterfly Pattern 🦋.
### It has two parts:
### 1️.Upper half (increasing stars)
### 2️.Lower half (decreasing stars)
<pre> 
for (col = 1; col <=  row; col++)
    cout << "*";
    // space
    for (col = 1; col <= (2*total_row) - 2*row; col++)
    cout << " ";
    // right side
    for (col = 1; col <=  row; col++)
    cout << "*"; </pre>

<pre>
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *</pre>