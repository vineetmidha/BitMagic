// Count no. of set bits

// https://leetcode.com/problems/number-of-1-bits/

int hammingWeight1(uint32_t n) {
    unsigned int c = 0;

    while (n != 0)
    {
        c++;
        int mask = n & -n;
        n ^= mask;
    }

    return c;
}

int hammingWeight2(uint32_t n) {
    unsigned int c = 0;

    while (n != 0)
    {
        c++;
        int mask = n & -n;
        n -= mask;
    }

    return c;
}

int hammingWeight3(uint32_t n) {
    unsigned int c = 0;

    while (n != 0)
    {
        c += (n&1);
        n >>= 1;
    }

    return c;
}
