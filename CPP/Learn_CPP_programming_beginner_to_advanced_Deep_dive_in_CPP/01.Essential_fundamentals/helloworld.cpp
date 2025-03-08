#include <iostream>

int main(){
  const std::string name = "Joaquin";
  int a = 6;
  int b = 4;
  int c = (float)a/(float)b;
  int x = 42;
  float d = 12;
  auto e = 15;
  float f = d/(decltype(d))e;
  std::cout << f << "\n";
	std::cout << "Bye world! " << x << std::endl;
  x = 43;
  std::cout << x << "\n";
  std::cout << name << "\n";
  bool z = true;
  std::cout << z << "\n";
  std::cout << c << "\n";
  return 0;
}
