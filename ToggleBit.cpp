// Toggle a given bit

bool checkBit(int n, int bit)
{
    int mask = (1 << bit);
    
    return (n & mask) == 0;
}

int main()
{
    int n;
    cin >> n;
    
    int bit;
    cin >> bit;

    if (checkBit(n, bit))
        cout << bit << " Not Set" << endl;
    else
        cout << bit << " Set" << endl;    

    int mask = (1 << bit);
    
    n = (n ^ mask);
    
    if (checkBit(n, bit))
        cout << bit << " Not Set";
    else
        cout << bit << " Set";    

    return 0;
}
