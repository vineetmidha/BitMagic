// An array of contains elements with all the numbers in duplicate except one. 
// Find the unique number. 

// Algo:

// XOR of two same numbers gives 0.
// Hence, XOR of all the elements of array will cancel all the duplicates 
// and the result of XOR will be the unique number. 

int find_unique (int a[], int n){
    int result = 0;
    
    for (int i = 0; i < n; i++){
        result ^= a[i];
    }
    
    return result;
}

int main()
{
    int a[] = {1,1,3,3,5,5,7,9,9};
    
    int size = sizeof(a) / sizeof(int);
    
    cout << "Unique: " << find_unique(a, size);

    return 0;
}

/*

Unique: 7

*/
