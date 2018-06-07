#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int noOfSwaps,swaps=0,tmp;
    for( int i = 0 ; i < n ; i++ ){
        
        noOfSwaps = 0;
        for( int j = 0 ; j < n-1 ; j++ ){
            if( a[ j ] > a[ j + 1 ] ){
                ++noOfSwaps;
                tmp = a[ j ];
                a[ j ] = a[ j + 1 ];
                a[ j + 1 ] = tmp;
            }
        }
        if(noOfSwaps == 0){
            break;
        }
        
        else{
            swaps += noOfSwaps;
        }
    }
    cout<<"Array is sorted in "<<swaps<<" swaps.";
    cout<<"\nFirst Element: "<<a[0];
    cout<<"\nLast Element: "<<a[a.size()-1];
    return 0;
}