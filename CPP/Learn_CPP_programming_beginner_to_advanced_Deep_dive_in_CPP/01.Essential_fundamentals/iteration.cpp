#include <iostream>

int main(){
  int x = 99;
  while (x>0 && x<100){
    std::cout<<x<<"\n";
    x = x-1;
  }
  std::string s = "abcdefg";
  for(char c: s){
    std::cout << c << "\n";
    if (c == 'f'){
      break;
    }
  } //Data structure when you know all elements
  /*
   correct form FOR
   for(int i=0; i < s.lenght(); i = i+ 1 ){
       std::cout << s.at(i) << "\n";
       if(s.at(i)=='f'){
         break;
       }
   }
   */

  return 0;
}
