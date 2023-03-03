#ifndef BASE_H
#define BASE_H
#include <QString>

namespace hj{

class Base
{
    // Atributos
private:
    int num;
    int base;
    int valor;
public:
    Base(int valor);
    int calcularBase();
};
}
#endif // BASE_H
