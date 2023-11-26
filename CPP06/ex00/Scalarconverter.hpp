#pragma once


#include <iostream>
#include <sstream>

class ScalarConverter 
{
    public:
        static void convert(const std::string& literal);

    private:
        Scalarconverter();
        ScalarConverter(const ScalarConverter&);
        ScalarConverter& operator=(const ScalarConverter&);
        ~ScalarConverter();

        static bool convertToChar(const std::string& literal, char& result);
        static bool converToInt(const std::string& literal, int& result);
        static bool convertToFloat(const std::string& literal, float& result);
        static bool convertToDouble(const std::string& literal, double& result);


}