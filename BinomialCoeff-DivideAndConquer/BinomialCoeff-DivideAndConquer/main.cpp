//
//  main.cpp
//  BinomialCoeff-DivideAndConquer
//
//  Created by Logan Christopher on 3/31/21.
//  Copyright © 2021 Logan Christopher. All rights reserved.
//

#include <iostream>
using namespace std;
using namespace std::chrono;

int C(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return C(n-1, k) + C(n-1, k-1);
    }
}

int main() {
    cout << "Divide-and-Conquer Binomial Coefficient Calculator" << endl;
    cout << "--------------------------------------------------" << endl << endl;
    
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
