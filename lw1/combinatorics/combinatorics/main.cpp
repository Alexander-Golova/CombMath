#include "stdafx.h"


int main()
{
	std::vector<size_t> v = {7, 1, 12, 5};
	std::sort(v.begin(), v.end());
	do
	{
		copy(v.begin(), v.end(), std::ostream_iterator<size_t>(std::cout, " "));
		std::cout << std::endl;
	}
	while (std::next_permutation(v.begin(), v.end()));
	return 0;
}
