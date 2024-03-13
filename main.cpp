#include <iostream>

#include <vector>
#include<cassert>

using namespace std;

vector<int> map(vector<int> numbers, int(*fun)(int))
{
    vector<int> result;
	for (int i = 0; i < size(numbers); i++)
	{
		result[i] = fun(numbers[i]);
	}
	return result;
}
vector<int> filter(vector<int> numbers, bool(*fun)(int))
{
	vector<int> result;
	for (int i = 0; i < size(numbers); i++)
	{
		if (fun(numbers[i]) == true)
			result[i] = numbers[i];
	}
	return result;
}
/// @brief русский текст
/// @param x 
/// @return 
int sum(int x) {
	return x + x;
}

int main()
{
    std::cout<<"Hello World";
    
    vector<int> v = {1,2,3,4};
    auto result = map (v, sum);
    
    for (auto item : result)
    {
        std::cout<<item<<std::endl;
    }
    

    return 0;
}