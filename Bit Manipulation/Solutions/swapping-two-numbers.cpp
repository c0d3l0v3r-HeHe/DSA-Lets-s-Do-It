#include <bits/stdc++.h>
using namespace std;


// intuition behind : Taking the XOR of a number two times results in the number never taken 
void swap(int &a, int &b) {
    a = a^b;
    b = a^b; // a = a^b so -> a^b^b => a
    a = a^b; // now b = a -> a^b^a => b
}


// if you go to GFG to submit and got these types of INputs please remember to assign values after dereferencing and using the local variables 
void get(int *a, int *b) {
    // code here
    int x = *a;
    int y = *b;
    x = x^y;
    y = x^y; // x = x^y so -> x^y^y => x
    x = x^y; // now y = x -> x^y^x => y
    *a = x;
    *b = y;
}

int main() {
    int x ;
    int  y;
    cin >> x >> y;
    swap(x, y);
    cout << x << " " << y << endl;
}
