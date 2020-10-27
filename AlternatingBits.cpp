// https://leetcode.com/problems/binary-number-with-alternating-bits/

// Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

bool hasAlternatingBits(int n) {
    int prev = (n&1)==1 ? 1 : 0;
    n >>= 1;

    while (n != 0)
    {
        int current = (n&1)==1 ? 1 : 0;

        if (current == prev)
            return false;

        n >>= 1;

        prev = current;
    }

    return true;
}
