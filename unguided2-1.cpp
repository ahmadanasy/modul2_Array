#include <iostream>
using namespace std;

int main() {
  int data[10];
  cout << "Masukkan data Array: ";
  for (int i = 0; i < 10; i++) {
    cin >> data[i];
  }

  cout << "Nomor genap: ";
  for (int i = 0; i < 10; i++) {
    if (data[i] % 2 == 0) {
      cout << data[i] << ", ";
    }
  }
  cout << endl;

  cout << "Nomor ganjil: ";
  for (int i = 0; i < 10; i++) {
    if (data[i] % 2 != 0) {
      cout << data[i] << ", ";
    }
  }
  cout << endl;

  return 0;
}
