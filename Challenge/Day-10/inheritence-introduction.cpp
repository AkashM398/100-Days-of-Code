#include <iostream>
#include <memory>

class Shape
{
public:
    virtual const void triangle()const = 0;
    virtual ~Shape(){}
};

class Triangle: public Shape
{
public:
    virtual const void triangle()const override
    {   std::cout<<"I am a triangle\n";  }
};

class Isosceles : public Triangle
{
public:
    virtual const void triangle()const override
    {
        std::cout<<"I am an isosceles triangle\n";
        std::cout<<"In an isosceles triangle two sides are equal\n";
    }
};
int main()
{
    std::unique_ptr<Shape> Obj[2];

    Obj[0] = std::make_unique<Isosceles>();
    Obj[1] = std::make_unique<Triangle>();

    for(const auto &it: Obj)
        it->triangle();

    return 0;
}