// Find out rightmost set bit of a number

void decimal2binary(int n)
{
    int i = 0;
    int a[32];

    while (n != 0)
    {
        a[i++] = n % 2;
        n /= 2;
    }

    while (--i >= 0)
    {
        cout << a[i];
    }

    cout << endl;
}

// This function will return the RightMost Set Bit

int findRightMostSetBit1(int n)   // O(n)
{
    int mask = 1;

    int bit = 0;

    while (true)
    {
        if ((n & mask) != 0)
        {
            break;
        }

        mask = (mask << 1);
        bit++;
    }

    return bit;
}

// This function will return the Mask used for finding RightMostBit

int findRightMostSetBit2(int n)   //  O(1)
{
    return n & -n;
}

int main()
{
    int n;
    cin >> n;

    decimal2binary(n);

    cout << findRightMostSetBit1(n) << endl;
    cout << findRightMostSetBit2(n) << endl;

    return 0;
}
