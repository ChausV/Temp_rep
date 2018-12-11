#include <iostream>
#include <vector>

class Figure
{
public:
	virtual void area() const = 0;
private:
};


class Circle : public Figure
{
public:
	Circle() : r(1) {}
	virtual void area() const { std::cout << "Circle area: " << 3.14 * static_cast<double>(r * r) << std::endl; }
private:
	int r;
};


class Polygon : public Figure
{
public:
	virtual void area() const = 0;
private:
};


class Square : public Polygon
{
public:
	Square() : a(5) {}
	virtual void area() const { std::cout << "Square area: " << a * a << std::endl; }
private:
	int a;
};


class Rectangle : public Polygon
{
public:
	Rectangle() : a(10), b(10) {}
	virtual void area() const { std::cout << "Rectangle area: " << a * b << std::endl; }
private:
	int a;
	int b;
};


int main()
{
	std::vector<Figure*> vec;
	Square sq;
	Rectangle re;
	Circle ci;
	vec.push_back(&sq);
	vec.push_back(&re);
	vec.push_back(&ci);
	
	for (size_t i = 0; i < vec.size(); ++i)
		vec[i]->area();

	return 0;
}