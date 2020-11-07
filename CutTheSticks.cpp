
// https://www.hackerrank.com/challenges/cut-the-sticks/problem

vector<int> cutTheSticks(vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    vector<int> result;
    
    result.push_back(arr.size());
    
    for (int i=1; i<arr.size(); i++){
        if (arr[i] != arr[i-1]){
            result.push_back(arr.size()-i);
        }
    }    
    
    return result;
}

/*

Sample Input 0

6
5 4 4 2 2 8

Sample Output 0

6
4
2
1

*/
