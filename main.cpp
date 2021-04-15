//Ronald Angora
//Alternative method for class declaration in C++ i.e. to the scope resolution operator method per Gaddis (2019)

#include <iostream>
using namespace std;

//Class declarations
class Rectangle
{
  private:
    double width;
    double length;
  public: //Function definitions and other member functions
    //Default constructor - gives initial values to private member variables
    Rectangle()
    {
      //Called when I say Rectangle r;
      cout << "\nDefault constructor called" << endl;
      width = 0.0; //Set the private member width = 0.0;
      length = 0.0; //Set the private member length = 0.0;
    }
    //Parameterized constructor - gives default values based upon parameters
    Rectangle(double w, double l)
    {
      //Called when I say Rectangle rect(5.2, 2.7);
      cout << "\nParameter constructor called" << endl;
      width = w; //Set the private member width = w;
      length= l; //Set the private member length = l;
    }
  void setWidth(double w) { width = w; }
  void setLength(double l) { length = l; }
  double getWidth() const { return width; }
  double getLength() const { return length; }
  double getArea() const { return (length * width); }
  void drawRectangle()
  {
    for(int i = 0; i < width; i++)
    {
      for(int j = 0; j < length; j++)
      {
        cout << "*";
      }
      cout << endl;
    }  
  }
};

int main() 
{
  //Local to int main() variables
  double wLocal = 0.0;
  double lLocal = 0.0;

  /************** Working with the default constructor **************/
  Rectangle r;
  cout << "\nCurrent w = " << r.getWidth() << endl;
  cout << "Current l = " << r.getLength() << endl;
  
  cout << "Please enter a value for w: ";
  cin >> wLocal; //Input
  r.setWidth(wLocal); //Set the width to the user input

  cout << "Please enter a value for l: ";
  cin >> lLocal; //Input
  r.setLength(lLocal); //Set the length to the user input

  cout << "The area of the Rectangle with width = " << r.getWidth() << " and length = " << r.getLength() << " is " << r.getArea() << ".\n";

  /************** Working with the parameterized constructor **************/
  cout << "Please enter a value for w: ";
  cin >> wLocal; //Input

  cout << "Please enter a value for l: ";
  cin >> lLocal; //Input

  Rectangle rect(wLocal, lLocal);
  cout << "The area of the Rectangle with width = " << rect.getWidth() << " and length = " << rect.getLength() << " is " << rect.getArea() << ".\n";
  
  //Dr. T Challenge - Draw the rectangles. 
  r.drawRectangle(); //Default constructor rectangle drawn
  rect.drawRectangle(); //Parameterized constructor rectangle drawn
  return 0;
}