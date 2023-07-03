#include<iostream>
#include<vector>

int main(){

  std::vector<double> location = {42.651443, -73.749302};
   std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
  
  std::cout << location.push_back(42.651443);
  location.push_back(42.651443);
  location.pop_back();

  std::cout << "Size: " << location.size() << std::endl;
  std::cout << "First: " << location[0] << std::endl;
  std::cout << "Second: " <<location[1] << std::endl;
  std::cout << "Third: " <<location[2] << std::endl;

  return 0;


}