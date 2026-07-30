#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int Mat[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valaor na posicao [" << i + 1 << " , " << j + 1 << "]: ";
            cin >> Mat[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j  = 0; j < 3; j++) {
            cout << "[" <<  setw(3) << Mat[i][j] << "]";
        }
        cout << endl;
    }
    /*
     [1 0 0]
     [0 1 0]
     [0 0 1]

     */

    for (int i = 0; i < 3; i++) {
        for (int j  = 0; j < 3; j++) {
            if (i == j) {
                cout << "{" << setw(3) << Mat[i][j] << "}";
            }else {
                cout << "[" << setw(3) << 0 << "]";
            }
        }
        cout << endl;
    }
    return 0;
}
