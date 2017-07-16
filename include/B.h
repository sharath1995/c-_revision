#ifndef B_H
#define B_H

#include <A.h>
using namespace std;

class B : private A
{
    int c;
    public:
     void mul(void);
     void display(void);

};


void B:: mul()
{
    get_ab();
    c = b*get_a();
}

void B:: display()
{
    show_a();
    cout<< "b = "<< b << "\n"
        << "c = "<< c << "\n\n";
}
#endif // B_H
