#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }

    //second largest 

    int largest = a[0];
    for(int i = 0; i<n;i++){
        if(a[i] > largest){
            largest = a[i];
        }
    }
    cout << largest << endl;
    
    int sLarge = -1;
    for(int i = 0;i<n;i++){
        if((a[i]>sLarge) && (sLarge < largest)){
            sLarge = a[i];
        }
    }

    cout << sLarge << endl;


    return 0;
}