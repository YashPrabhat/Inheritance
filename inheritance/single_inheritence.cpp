// This program demonstrates single inheritance 
// Base class has a function which calculates the area of circle  
// Further display() function accesses the area variable through get_area() function and provides the value of area.

#include <iostream>
#include <math.h>
using namespace std;

class shape
{
	float area;
	public:
		float get_area(float f){
		area = 3.14 * pow(f,2);
		return area;}
};

class circle : public shape
{
	public:
		void display(float f){
			cout <<"Area of the circle for the given radius: " << get_area(f) << endl;}
};

int main()
{ 
	float radius;
	circle c;
	cout << "Enter the radius of the circle: " << endl;
	cin >> radius;
	c.display(radius);
	return 0;
}
