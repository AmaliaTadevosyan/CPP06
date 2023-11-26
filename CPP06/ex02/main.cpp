#include "Base.hpp"
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
    int randomNum = std::srand() % 3;
    switch (randomNum)
    {
        case 0:
                return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default: 
            return nullptr;
    }
}

void    identify(Base* p)
{
    if (dynamix_cast<A*>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamix_cast<B*>(p) != nullptr)
        std::cout << "B" << std::endl;
    else if (dynamix_cast<C*>(p) != nullptr)
        std::cout << "C" << std::endl;
    else    
        std::cerr << "Unknown type" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        dynamix_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception& e){}
    try
    {
        dynamix_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (const std::exception& e){};
    try 
    {
        dynamix_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (const std::exception& e);

}


int main()
{
    Base * data;
    data = generate();
    identify(data);
    identify(*data);
    return 0;
} 