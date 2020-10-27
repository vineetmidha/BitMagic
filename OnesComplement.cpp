// One's complement of a number

long onesComplement(int n)
{
    return ~n;
}

int main()
{
    int n;
    cin >> n;

    cout << n << " => " << onesComplement(n);

    return 0;
}

/*

Input: 16

Output: 16 => -17

*/
