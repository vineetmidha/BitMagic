
// https://www.hackerrank.com/challenges/sansa-and-xor/problem

/*
XOR cancels out a number, if it comes twice. 
1^1^2 = 2

1. Find out the frequency of an element in all the sub-arrays using the formula : (i+1)*(n-i)
2. Get its remainder to remove the even no. of occurrences
3. Multiply with the element and XOR with the result.

*/

int sansaXor(vector<int> arr) {
    
    int result = 0;
    
    for (int i=0; i<arr.size(); i++){
        result ^= (((i+1)*(arr.size()-i))%2*arr[i]);
    }
    return result;
}

/*

Sample Input 0

2
3
1 2 3
4
4 5 7 5

Sample Output 0

2
0

*/
