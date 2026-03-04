#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1;
    T num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    T add()
    {
        return num1 + num2;
    }
    T subtract()
    {
        return num1 - num2;
    }
    T multiply()
    {
        return num1 * num2;
    }
    T divide()
    {
        if (num2 == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }
    void showAll()
    {
        //cout << "Add: " << add() << endl;
        //cout << "Subtract: " << subtract() << endl;
       //cout << "Multiply: " << multiply() << endl;
        cout << "Divide: " << divide() << endl;
    }
};

int main()
{
    cout << "--- Integer Calculator ---" << endl;
    Calculator<string>c1("ali", "eman");
    c1.showAll();

    system("pause");
    return 0;
}