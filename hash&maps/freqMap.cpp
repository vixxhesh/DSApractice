#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //precompute the map and variables
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;

    }
    return 0;

}