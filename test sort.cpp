#include <iostream>

const double PI = 3.14;
float circle_area(float r) {
    float result = PI * r * r;
    return result;
}

int main()
{
    int r = 12;
    std::cout<<circle_area(r);
}