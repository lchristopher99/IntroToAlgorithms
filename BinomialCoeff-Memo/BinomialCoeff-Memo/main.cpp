//
//  main.cpp
//  BinomialCoeff-Memo
//
//  Created by Logan Christopher on 3/31/21.
//  Copyright © 2021 Logan Christopher. All rights reserved.
//

#include <iostream>
using namespace std;
using namespace std::chrono;

int C_memo(int n, int k, int** coef)
{
    if (coef[n][k] != -1) {
        return coef[n][k];
    }
    
    if (k == 0) {
        coef[n][k] = 1;
        return coef[n][k];
    }
     
    if (k == n) {
        coef[n][k] = 1;
        return coef[n][k];
    }
     
    coef[n][k] = C_memo(n - 1, k - 1, coef) + C_memo(n - 1, k, coef);
    
    return coef[n][k];
}
 
int C(int n, int k)
{
    int** coef;
    coef = new int*[n + 1];
 
    for (int i = 0; i < (n + 1); i++) {
        coef[i] = new int[k + 1];
    }
 
    for (int i = 0; i < (n + 1); i++) {
        for (int j = 0; j < (k + 1); j++) {
            coef[i][j] = -1;
        }
    }
 
    return C_memo(n, k, coef);
}
 
int main() {
    cout << "Memoization Binomial Coefficient Calculator" << endl;
    cout << "----------------------------------------------" << endl << endl;
    
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
    
    return 0;
}
 
