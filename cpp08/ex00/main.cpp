#include "easyfind.hpp"

int main()
{
    std::vector<int> fProject;
    int fValue = 42;
    
    for(size_t i = 0; i < 42; i++)
    {
        fProject.push_back(i);
        i+=2;
    }
    try
    {
            std::vector<int>::iterator it = easyfind(fProject, fValue);
            std::cout << "Number is " << *it  << " !"<< std::endl;

    }
    catch(std::runtime_error& e)
    {
        std::cerr << e.what() << std::endl;
    }
}