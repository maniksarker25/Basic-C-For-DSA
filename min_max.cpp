#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B >> C;

    int minimum = min({A, B, C});
    int maximum = max({A, B, C});
    
    cout << minimum << " " << maximum << endl;
    
    return 0;
}
