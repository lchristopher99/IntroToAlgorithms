//
//  main.cpp
//  BinomialCoeff-BottomUp
//
//  Created by Logan Christopher on 3/31/21.
//  Copyright © 2021 Logan Christopher. All rights reserved.
//

#include <iostream>
using namespace std;
using namespace std::chrono;
 
int min(int a, int b) { return (a < b) ? a : b; }
 
int C(int n, int k) {
    int coef[n + 1][k + 1];
    int i, j;
 
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
        if (j == 0 || j == i) {
            coef[i][j] = 1;
        } else
            coef[i][j] = coef[i - 1][j - 1] + coef[i - 1][j];
        }
    }
    
    return coef[n][k];
}

int main()
{
    cout << "Bottom-Up Binomial Coefficient Calculator" << endl;
    cout << "-----------------------------------------" << endl << endl;
    
    int n = 26, k = 13;
    auto start = std::chrono::high_resolution_clock::now();
    cout << "C(" << n << ", " << k << ") = "
    << C(n, k) << endl << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time (microseconds): " << duration.count() << endl << endl;
    
    n = 28;
    k = 14;
    start = std::chrono::high_resolution_clock::now();
    cout << "C(" << n << ", " << k << ") = "
    << C(n, k) << endl << endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time (microseconds): " << duration.count() << endl << endl;
    
    n = 30;
    k = 15;
    start = std::chrono::high_resolution_clock::now();
    cout << "C(" << n << ", " << k << ") = "
    << C(n, k) << endl << endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time (microseconds): " << duration.count() << endl << endl;
    
    n = 32;
    k = 16;
    start = std::chrono::high_resolution_clock::now();
    cout << "C(" << n << ", " << k << ") = "
    << C(n, k) << endl << endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time (microseconds): " << duration.count() << endl << endl;
    
    n = 34;
    k = 17;
    start = std::chrono::high_resolution_clock::now();
    cout << "C(" << n << ", " << k << ") = "
    << C(n, k) << endl << endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time (microseconds): " << duration.count() << endl << endl;
    
    n = 36;
    k = 18;
    start = std::chrono::high_resolution_clock::now();
    cout << "C(" << n << ", " << k << ") = "
    << C(n, k) << endl << endl;
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time (microseconds): " << duration.count() << endl << endl;
}
