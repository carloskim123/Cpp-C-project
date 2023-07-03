#include <iostream>
#include <vector>

int main()
{
  // Declared Vectors
  std::vector<double> location = {42.651443, -73.749302};
  std::vector<double> delivery_order;
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

  // Vectors being manipulated
  location.push_back(42.651443);
  location.pop_back();

  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);

  // Calculate the total cost of the order
  double total = 0.0;

  for (int i = 0; i < delivery_order.size(); i++)
  {
    total = total + delivery_order[i];
  }

  std::cout << "Total cost of the order: "
            << "$" << total << std::endl;

  // Printing Vectors
  std::cout << "Size: " << location.size() << std::endl;
  std::cout << "First: " << location[0] << std::endl;
  std::cout << "Second: " << location[1] << std::endl;
  std::cout << "Third: " << location[2] << std::endl;

  // Looping through grocery vector
  for (int i = 0; i < grocery.size(); i++)
  {
    grocery[i] = "Hot Pepper Jam";
    std::cout << grocery[i] << std::endl;
  }

  /*

  Write a program to find the sum of even numbers and the product of odd numbers in a vector.

  For example:

  Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

  Then the program should output:

  Sum of even numbers is 12
  Product of odd numbers is 27
  */

  int total_even = 0;
  int total_odd = 1;

  std::vector<int> vector = {2, 4, 3, 6, 1, 9, 3};
  

  for (int i = 0; i < vector.size(); i++){
    if(vector[i] % 2 == 0){
      total_even = total_even + vector[i];
    } else if(vector[i] % 2 == 1){
      total_odd = total_odd * vector[i];
    }

  }

  std::cout << "Sum of even numbers is " << total_even << std::endl;
  std::cout << "Product of odd numbers is " << total_odd << std::endl;

  return 0;
}