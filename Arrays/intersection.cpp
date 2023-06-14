#include <bits/stdc++.h>

using namespace std;

vector <int> IntersectionFun(int arr1[], int arr2[], int m, int n){
    int i = 0,  j = 0;

    vector <int> Intersection;

    while(i<m && j<n){
        
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            Intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return Intersection;
}
int main(){
    int m = 4, n = 6;
    int a1[] = {2, 3,4,4};
    int a2[] = {1,2,4,5,6,6};
    vector <int> Intersection = IntersectionFun(a1,a2,m,n);
    for(auto & val : Intersection){
        cout << val << endl;
    }
    return 0;
}