// Find out two's complement of a number

long twosComplement1(int n)
{
    return (~n + 1);
}

long twosComplement2(int n)
{
    return -n;
}

int main()
{
    int n;
    cin >> n;

    cout << n << " => " << twosComplement1(n) << endl;
    cout << n << " => " << twosComplement2(n);

    return 0;
}

/*

Input: 18

Output: 
18 => -18
18 => -18

*/
