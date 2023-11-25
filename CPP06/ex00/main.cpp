#include "ScalarConverter.hpp"

int main() {
    // Example usage
    ScalarConverter::convert("'a'");
    ScalarConverter::convert("42");
    ScalarConverter::convert("3.14f");
    ScalarConverter::convert("-inff");

    return 0;
}