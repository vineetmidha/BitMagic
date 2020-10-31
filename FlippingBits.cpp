// https://www.hackerrank.com/challenges/flipping-bits/problem

long flippingBits(long n) {
    long mask = 1;

    int bits = 32;

    while (bits != 0){
        n ^= mask;
        mask <<= 1;
        bits--;
    }

    return n;
}
