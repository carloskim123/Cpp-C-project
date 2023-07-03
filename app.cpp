#include <iostream>
#include <vector>

int main()
{
  //Declared Vectors 
  std::vector<double> location = {42.651443, -73.749302};
  std::vector<double> delivery_order;
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

  //Vectors being manipulated
  location.push_back(42.651443);
  location.pop_back();

  //Printing Vectors
  std::cout << "Size: " << location.size() << std::endl;
  std::cout << "First: " << location[0] << std::endl;
  std::cout << "Second: " << location[1] << std::endl;
  std::cout << "Third: " << location[2] << std::endl;

  //Looping through grocery vector
  for (int i = 0; i < grocery.size(); i++)
  {
    grocery[i] = "Hot Pepper Jam";
    std::cout << grocery[i] << std::endl;
  }

  return 0;
}