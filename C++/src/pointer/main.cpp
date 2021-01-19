#include <iostream>

using namespace std;

int main() {
  int num = 1;
  int * ptr = &num;
  cout << "Address value: " << ptr << "\n";
  cout << "Value" << * ptr << "\n";

}