#include <iostream>
#include <vector>

std::ostream & operator<<(std::ostream & out, const std::vector<int> & vec)
{
	for(std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
	{
		out << *it << " ";
	}
	out << std::endl;
	return out;
}

//using std::vector<int> vint;
typedef std::vector<int> vint;

const vint operator+(const vint & lv, const vint & rv)
{
	const vint::size_type size = lv.size();
	vint res;

	for(vint::size_type i = 0; i < size; ++i)
	{
		res.push_back(lv[i] + rv[i]);
	}

	return res;
}

int main()
{

std::vector<int> myvec(3, 42);
std::vector<int> myvec2(3, 24);

//std::cout << myvec;

std::cout << myvec + myvec2;

return 0;
}
