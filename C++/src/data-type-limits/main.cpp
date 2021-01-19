#include <iostream>
#include <limits>

// To avoid use 
// std::cout -> cout
// std::cin -> cin
// std::string -> string 
using namespace std;

template<typename T>
void showMinMax() {
  cout << "Min: " << numeric_limits<T>::min() << endl;
  cout << "Max: " << numeric_limits<T>::max() << endl;
  cout << endl;
}


int main() {
   cout << "short:" << endl;
   showMinMax<short>();
   cout << "int:" << endl;
   showMinMax<int>();
   cout << "long:" << endl;
   showMinMax<long>();
   cout << "float:" << endl;
   showMinMax<float>();
   cout << "double:" << endl;
   showMinMax<double>();
   cout << "long double:" << endl;
   showMinMax<long double>();
   cout << "unsigned short:" << endl;
   showMinMax<unsigned short>();
   cout << "unsigned int:" << endl;
   showMinMax<unsigned int>();
   cout << "unsigned long:" << endl;
   showMinMax<unsigned long>();
}