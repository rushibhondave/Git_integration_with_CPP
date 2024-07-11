include <iostream>  
  
// Define the Shape interface  
class Shape {  
public:  
virtual double getArea() const = 0; // Pure virtual function for area  
virtual double getPerimeter() const = 0; // Pure virtual function for perimeter  
};  
  
// Implement the Interface for a Circle  
class Circle: public Shape {  
private:  
double radius;  
  
public:  
Circle(double r) : radius(r) {}  
  
double getArea() const  {  
return 3.14159265359 * radius * radius;  
}  
  
double getPerimeter() const override {  
return 2 * 3.14159265359 * radius;  
}  
};  
  
// Implement the Interface for a Rectangle  
class Rectangle: public Shape {  
private:  
double length;  
double width;  
  
public:  
Rectangle(double l, double w) : length(l), width(w) {}  
  
double getArea() const override {  
return length * width;  
}  
  
double getPerimeter() const override {  
return 2 * (length + width);  
}  
};  
  
int main() {  
// Create instances of Circle and Rectangle  
Circle circle(5.0);  
Rectangle rectangle(4.0, 6.0);  
  
// Calculate and display the area and perimeter of each shape  
std::cout << "Circle Area: " << circle.getArea() << ", Perimeter: " << circle.getPerimeter() << std::endl;  
std::cout << "Rectangle Area: " << rectangle.getArea() << ", Perimeter: " << rectangle.getPerimeter() << std::endl;  
  
return 0;  
}  