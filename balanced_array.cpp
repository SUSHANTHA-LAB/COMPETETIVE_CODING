#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> A{10668, 10668, 10668, 10668, 10668};  
    int even = 0;
    int odd = 0;
    int splcount =0;
    for(int j =0 ; j<A.size();j++){
    for(int i = 1; i<A.size();i++){
        if(i%2==0) even += A[i];
        else odd += A[i];
    }
    //for(int k =0;k<A.size();k++) cout << A[k];
    //cout << endl;
    if(even == odd) splcount ++;
        int temp = A[j+1];
        A[j+1] = A[0];
        A[0] = temp;
        even = 0 ;
        odd = 0;
    }
    cout<< splcount;
}