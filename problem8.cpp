                                        /*define two student mark using friend function*/

#include <iostream>
using namespace std;
class student2;
class student1
{
protected:
    int mark;

public:
    void input_1()
    {
        cout << "input mark for s1: ";
        cin >> mark;
    }
    friend void compmark(student1 , student2 );
};
class student2
{
protected:
    int mark;

public:
    void input_2()
    {
        cout << "input mark for s1: ";
        cin >> mark;
    }
    friend void compmark(student1 , student2 );
};
void compmark( student1 s1, student2 s2)
{
    if (s1.mark > s2.mark)
    {
        cout << "Studnt 1 has more mark.";
    }
    else
    {
        cout << "Studnt 2 has more mark.";
    }
}
int main()
{
    student1 s1;
    s1.input_1();
    student2 s2;
    s2.input_2();
    compmark(s1,s2);
}