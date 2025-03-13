#include <iostream>
int square(int value) {
  int result = value * value;
  return result;
}

int arTriangle(int base, int altura){
  int area_triangle = (base*altura)/2;
  return area_triangle;
}

std::string hello(std::string greeting){
  std::string hi = "Hello " + greeting;
  return hi;
}

int main(){
  std::cout << "--------------------\n";
  int squareOfTwo = square (2);
  std::cout << "Square of two" << squareOfTwo << "\n";
  std::cout << "square(2): " << square(2) << "\n";
  int area1 = (float)arTriangle(4,4);
  std::cout << area1 << "\n";
  std::cout << hello(" world") << " world\n";
  return 0;
}
