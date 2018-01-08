//NEAGU OANA LUCIANA, 322AC, LABORATOUL 11

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
//UPDATE 1
class Stack
{
public:

    //metodele clasei Stack
    int size() const;

    bool isEmpty() const;

    const T& top() const
    {
        if (isEmpty()) throw "STIVA GOALA\n";
        return v.back();
    }

    void push(const T& ob);

    void pop();

    vector <T> v;
};

template <typename T> bool Stack<T>::isEmpty() const
{
    return (v.empty());
}

template <typename T> void Stack<T>::push(const T& ob)
{
    v.push_back(ob);
}

template <typename T> void Stack<T>::pop()
{
    if (isEmpty()) throw "STIVA GOALA\n";
    v.pop_back();
}

int main()
{
    Stack <char> lite;
    Stack <int> nr;

    //populam stiva lite cu elemente de tip char
    lite.push('b');
    lite.push('l');
    lite.push('m');

    while (!lite.isEmpty())
    {
        cout << lite.top() << "\n"; //afisez stiva
        lite.pop();
        //stergem din stiva elementele in ordine inversa fata de cum au fost adaugate
    }

    cout<<"\n";

    nr.push(3);
    nr.push(5);
    nr.push(7);

    while (!nr.isEmpty())
    {
        cout << nr.top() << "\n"; //afisez stiva
        nr.pop();
        //stergem din stiva elementele in ordine inversa fata de cum au fost adaugate

    }
}
