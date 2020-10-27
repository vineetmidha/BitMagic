// https://leetcode.com/problems/number-complement/

// Given a positive integer num, output its complement number. The complement strategy is to flip the bits of its binary representation.

int findComplement(int num) {
    int result = 0;
    int power = 0;

    while (num != 0)
    {   
        int bit = num % 2;

        if (bit == 0)
                result += pow(2, power);

        num /= 2;
        power++;
    }

    return result;
}

/*

Example 1:

Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

Example 2:

Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.

*/
