#include "Director.h"
#include "TextBuilder.h"
#include <iostream>
int main()
{
    TextBuilder *builder = new TextBuilder;
    Director director(builder);
    director.construct();
    std::string result = builder->getResult();
    std::cout << result << std::endl;
    delete builder;
    return 0;
}