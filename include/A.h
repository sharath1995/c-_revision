#ifndef A_H
#define A_H

using namespace std;
class A
{
    int a;
    public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};

void A:: get_ab(void)
{
    cout << "Enter values for a and b:";
    cin >> a >>b;
}

int A:: get_a()
{
    return a;
}

void A:: show_a()
{
    cout <<"a = " <<a<< "\n";
}
#endif // A_H
