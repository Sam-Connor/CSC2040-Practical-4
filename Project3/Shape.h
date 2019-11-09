#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
	virtual void compute_area() = 0; // a pure virtual function
	virtual void compute_perimeter() = 0; // a pure virtual function
	virtual void read_shape_data() = 0; // a pure virtual function
	virtual void print_result() { // a virtual function
		cout << "The area is " << area << endl
			<< "The perimeter is " << perim << endl;
	}
protected: // protected access spcifier
	double area, perim;
};


class Rectangle : public Shape {
public:
	void compute_area() { area = width * height; }
	void compute_perimeter() { perim = 2 * width + 2 * height; }
	void read_shape_data() {
		cout << "Enter width of the rectangle: ";
		cin >> width;
		cout << "Enter height of the rectangle: ";
		cin >> height;
	}
private:
	int width, height;
};


class Circle : public Shape {
public:
	void compute_area() { area = 3.1415 * 0.5 * diameter; }
	void compute_perimeter() { perim = 2 * diameter * 3.1415; }
	void read_shape_data() {
		cout << "Enter diameter of the circle: ";
		cin >> diameter;

	}
private:
	int diameter;
};


class RightAngledTriangle : public Shape {
public:
	void compute_area() { area = width * height * 0.5; }
	void compute_perimeter() { perim =  width + height + (sqrt((width *width)+(area*area)); }
	void read_shape_data() {
		cout << "Enter width of the triangle: ";
		cin >> width;
		cout << "Enter height of the triangle: ";
		cin >> height;
	}
private:
	int width, height;
};

#endif // !SHAPE_H
