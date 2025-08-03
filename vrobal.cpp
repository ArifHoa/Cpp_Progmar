#include <iostream>
using namespace std;

int main() {
  // Good variable name
  int minutesPerHour = 60;
  
  // OK, but not so easy to understand what m actually is
  int m = 60;

    // Create integer variables
  int length = 4;
  int width = 6;

  // Calculate the area of a rectangle
  int area = length * width;

  // Print the variables

  cout << minutesPerHour << "\n";
  cout << m <<"\n";
  cout << "Length is: " << length << "\n";
  cout << "Width is: " << width << "\n";
  cout << "Area of the rectangle is: " << area << "\n";
  return 0;
}