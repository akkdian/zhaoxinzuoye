#include<iostream>
#include<cmath>
using namespace std;
class Vector {
private:
	float x;
	float y;
public:
	Vector() {
		x = y = 0;
	}
	void setVector(float a, float b) {
		x = a;
		y = b;
	}
	Vector add(Vector a, Vector b) {
		Vector sum_result;
		sum_result.x = a.x + b.x;
		sum_result.y = a.y + b.y;
		return sum_result;
	}
	void print() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	void print_x() {
		cout << x << endl;
	}
	void print_y() {
		cout << y << endl;
	}
	void dir() {
		float abs_x, abs_y,length;
		abs_x = abs(x);
		abs_y = abs(y);
		length = sqrt(abs_x * abs_x + abs_y * abs_y);
		cout << length << endl;
	}
};
int main() {
	Vector a, b, c;
	a.setVector(2, 3);
	b.setVector(4, 5);
	c = c.add(a, b);
	a.print_x();
	a.print();
	b.print();
	c.dir();
}