#include <memory>

struct myStruct
{
    int x;
};

int main()
{
    auto test = std::make_unique<myStruct>();
    test->x = 15;
}