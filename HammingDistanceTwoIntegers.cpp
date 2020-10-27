// Hamming distance between two integers


int hammingDistance(int x, int y) {
    int result = x ^ y;

    int c = 0;

    while (result)
    {
        c++;
        int mask = result & -result; 
        result ^= mask;
    }

    return c;
}

