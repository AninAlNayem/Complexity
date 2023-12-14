# Complexity
## Code Snippet in C++

```cpp
What is time complexity of following code :

        int count = 0;
        for (int i = N; i > 0; i /= 2) {
            for (int j = 0; j < i; j++) {
                count += 1;
            }
        }


```
##### Operation on String

###### Problem Statement
You are given a string $`\ S `$ consisting of lowercase English letters. You have to perform this two types of operation on this string several times.
Operation 1: Reverse the string $`\ S `$ <br/>
Operation 2: An integer $`\ X `$ and a lowercase English letter $`\ C `$​ are additionally provided for this type of operation:   
if X=1 : Add C on the begining of the string $`\ S `$ <br/>    
if X=2 : Add C to the end of the string $`\ S `$
