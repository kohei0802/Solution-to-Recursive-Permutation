#include <iostream>
#include <vector> 
using namespace std;

constexpr int N = 3;

//print array out
void print(const vector<int>&);
//recursive func -> iterates through all permutation of 0 and 1
void rec(vector<int>&);

int main()
{
    vector<int> A;
    rec(A);

    return 0;
}

void rec(vector<int>& A) {
    if (A.size() == N) {
        print(A);
        return;
    }
    
    //searches arrays [0, ...] first, then [1, ...] 
    for (int v=0; v<2; v++) {
        A.push_back(v);
        rec(A); 
        A.pop_back();
    }
}

void print(const vector<int>& A) {
    cout << '[';
    for (int i=0; i<A.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << A[i];
    }
    cout << "]\n";
}
