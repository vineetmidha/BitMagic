// Check if a number is even or odd

int main()
{
    int n;
    cin >> n;
    
    if (n & 1 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

