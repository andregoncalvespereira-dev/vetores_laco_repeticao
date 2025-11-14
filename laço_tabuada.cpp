#include <iostream>
using namespace std;

int main() {
    int tabuada;

    cout << "qual a tabuada que vc quer" << endl;
    cin >> tabuada;
    
    for (int i=1; i <=10 ; i++) {
        cout << tabuada << " X " << i << " = " << tabuada * i << endl;
    }
    
    return 0;
}
