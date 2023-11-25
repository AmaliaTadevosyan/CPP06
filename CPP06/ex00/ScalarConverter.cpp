#include "ScalarConverter.hpp"

static void ScalarConverter::convert(const std::string& literal)
{
    char    charResult;
    int     intResult;
    float   floatResult;
    double  doubleResult;

    if (convertToChar(literal, charResult))
        std::cout << "Char: " << charResult << std::endl;
    else
        std::cerr << "Error: coannot convert to char. " << std::endl;

    if (converToInt(literal, intResult))
        std::cout << "Int: " << intResult << std::endl;
    else    
        std::cerr << "Error: Cannot convert to int." << std::endl;

    if (convertToFloat(literal, floatResult))
        std::cout << "Float: " << floatResult << std::endl;
    else    
        std::cerr << "Error: Cannot conver to flaot." << std::endl; 

    if (convertToDouble(literal, doubleResult))
        std::cout << "Double: " << doubleResult << std::endl;
    else 
        std::cerr << "Error: Cammot convert to double." << std::endl;
}

static bool ScalarConverter::convertToChar(const std::string& literal, char& resut)
{
    if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'')
    {
        result = literal[1];
        return true;
    }
    else
    {
        std::error << "Error: Invalid char literal." << std::endl;
        return false;
    }
}

static bool ScalarConverter::converToInt(const std::string& literal, int& result)
{
    std::string stream(literal);
    return (stream >> result) ? true : false;
}

static bool ScalarConverter::convertToFloat(std::string& literat, float& result)
{
   std::string stream(literal);
   return (stream >> result) ? true : false; 
}

static bool ScalarConverter::convertToDouble(std::string& literal, double& result)
{
    std::string stream(literal);
    return (stream >> result) ? true : false;
}