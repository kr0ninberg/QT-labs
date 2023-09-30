#include <QCoreApplication>
#include <iostream>

class abra{
private:
public:
    int x;
    void foo(){
        std::cout << "abra\n";
        x = 0;
        return;
    }
};

class A : abra{

};

int main(int argc, char *argv[])
{
    abra a;
    a.x = 0;
    a.foo();
    return 0;
}
