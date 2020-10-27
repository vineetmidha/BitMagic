// Check if a given bit is set or not

int main()
{
    int n;
    cin >> n;
    
    int bit;
    cin >> bit;
    
    int mask = (1 << bit);
    
    if ((n & mask) == 0)
        cout << "Not Set";
    else
        cout << "Set";

    return 0;
}
