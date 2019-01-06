#include<iostream>
#include<cmath>
using namespace std;

class RegularPolygon {
public:
	RegularPolygon() {
		n = 3;
		side = 1;
		x = 0, y = 0;
	}
	RegularPolygon(int newN, double newSide) {
		n = newN;
		side = newSide;
		x = 0, y = 0;
	}
	RegularPolygon(int newN, double newSide, double nX, double nY) {
		n = newN;
		side = newSide;
		x = nX, y = nY;
	}
	int getN() const {
		return n;
	}
	double getSide() const {
		return side;
	}
	double getX() const {
		return x;
	}
	double getY() const {
		return y;
	}
	void setN(int n) {
		this->n = n;
	}
	void setSide(double side) {
		this->side = side;
	}
	void setX(double nX) {
		x = nX;
	}
	void setY(double nY) {
		y = nY;
	}
	double getParimeter() const{
		return side * n;
	}
	double getArea() const {
		return (n*side*side) / (4 * tan(3.14 / n));
	}
private:
	int n;
	double side;
	double x, y;//�߽���ǥ..?
};
int main() {
	RegularPolygon P1;
	RegularPolygon P2(6, 4);
	RegularPolygon P3(10, 4, 5.6, 7.8);

	cout << "P1 �ѷ�: " << P1.getParimeter() << endl;
	cout << "P1 ����: " << P1.getArea() << endl;
	cout << "P2 �ѷ�: " << P2.getParimeter() << endl;
	cout << "P2 ����: " << P2.getArea() << endl;
	cout << "P3 �ѷ�: " << P3.getParimeter() << endl;
	cout << "P3 ����: " << P3.getArea() << endl;
	return 0;
}
