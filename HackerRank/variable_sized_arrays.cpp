#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    // use vector of vectors for dynamic sizing
    vector<vector<int>> a(n);
    
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i].resize(k);  // resize each row to hold k elements
        
        for(int j = 0; j < k; j++) {
            cin >> a[i][j]; 
        }
    }
    
    for(int p = 0; p < q; p++) {
        int i, j;
        cin >> i >> j;
        
        if(j < a[i].size()) {
            cout << a[i][j] << endl;  
        }
    }
    
    return 0;
}
