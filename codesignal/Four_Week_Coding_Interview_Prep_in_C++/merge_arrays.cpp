#include <iostream>
#include <vector>
#include <limits>

std::vector<int> mergeArrays(const std::vector<std::vector<int>>& arr) 
{
    std::vector<int> result;
    std::vector<std::pair<std::vector<int>::const_iterator, std::vector<int>::const_iterator>> itrs;

    for (const auto& a : arr) 
    {
        if (!a.empty()) {
            itrs.push_back(std::make_pair(a.begin(), a.end()));
        }
    }

    while (!itrs.empty())
    {
        int minVal = std::numeric_limits<int>::max();
        auto minIt = itrs.end();

        for (auto it = itrs.begin(); it != itrs.end(); ++it)
        {
            if (it->first != it->second && *(it->first) < minVal)
            {
                minVal = *(it->first);
                minIt = it;
            }
        }

        if (minIt != itrs.end())
        {
            result.push_back(minVal);
            ++(minIt->first);

            if (minIt->first == minIt->second)
            {
                itrs.erase(minIt);
            }
        }
        else
        {
            break;
        }
    }
    return result;
}


int main () 
{
	std::vector<int> l1 = {1, 3, 9};
	std::vector<int> l2 = {2, 7};
	std::vector<int> l3 = {4, 5, 6, 8, 10, 11};
	std::vector<std::vector<int>> test = {l1, l2, l3};
	std::vector<int> testcase = mergeArrays(test);
	for (const auto n: testcase) 
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;
	return 0;
}
