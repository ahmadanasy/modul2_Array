#include <iostream>
using namespace std;

int main() {
    int x_Ahmadan, y_Syaridin, z_2311102038;

    cout << "Masukkan jumlah array dalam dimensi x: ";
    cin >> x_Ahmadan;
    cout << "Masukkan  jumlah array dalam dimensi y: ";
    cin >> y_Syaridin;
    cout << "Masukkan  jumlah array dalam dimensi z: ";
    cin >> z_2311102038;

    int arr[x_Ahmadan][y_Syaridin][z_2311102038];

    for (int x = 0; x < x_Ahmadan; x++) {
        for (int y = 0; y < y_Syaridin; y++) {
            for (int z = 0; z < z_2311102038; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    cout << "Data Array:\n";
    for (int x = 0; x < x_Ahmadan; x++) {
        for (int y = 0; y < y_Syaridin; y++) {
            for (int z = 0; z < z_2311102038; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    cout << "Tampilan array:\n";
    for (int x = 0; x < x_Ahmadan; x++) {
        for (int y = 0; y < y_Syaridin; y++) {
            for (int z = 0; z < z_2311102038; z++) {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}