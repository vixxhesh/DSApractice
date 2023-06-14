#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    //input
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for(int i =0;i<m;i++){
        for(int j = 0; j<n;j++){
            cin >> a[i][j];
        }
    }

    //print 
    

    //transpose

    for(int i =0; i<m;i++){
        for(int j = 0; j<n;j++){
           
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
                
        
        }
    }

    //print new
     for(int i =0;i<m;i++){
        for(int j = 0; j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    
    return 0;
}