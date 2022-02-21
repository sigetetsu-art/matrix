#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include "matrix.h"
using namespace std;

int main(){
    vector<vector<double>> A = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
    };
    vector<vector<double>> B = {
        {13, 14},
        {15, 16},
        {17, 18}
    };

    vector<vector<double>> ans = calc_matrix_product(A, B);
    vector<vector<double>> At = make_tenchi(A);
    vector<vector<double>> Bt = make_tenchi(B);

    cout << "Result of matrix product" << endl;
    for(int i = 0; i < ans.size(); i ++){
        for(int j = 0; j < ans.at(0).size(); j++){
            cout << ans.at(i).at(j) << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Transverse matrix of matrix A" << endl;
    for(int i = 0; i < At.size(); i++){
        for(int j = 0; j < At.at(0).size(); j++){
            cout << At.at(i).at(j) << " ";
        }
        cout << endl;
    }

    cout << "Transverse matrix of matrix B" << endl;
    for(int i = 0; i < Bt.size(); i++){
        for(int j = 0; j < Bt.at(0).size(); j++){
            cout << Bt.at(i).at(j) << " ";
        }
        cout << endl;
    }
    return 0;
}

