#include <iostream>
using namespace std;
class student
{
    string name;
    int id;
    float gpa;

public:
    student() {};
    void input()
    {
        cin.ignore();
        cout << "input name: ";
        getline(cin, name);
        cout << "input id: ";
        cin >> id;
        cout << "input gpa: ";
        cin >> gpa;
    }
    friend class A;
};
class A
{
public:
    void output(student ob)
    {
        cout << "Name\t:" << ob.name << "\nId\t:" << ob.id << "\nGpa\t:" << ob.gpa << endl;
    }
};
int main()
{
    int x, i;
    cout << "Input student number: ";
    cin >> x;
    student s[x];
    A ob2;
    for (i = 0; i < x; i++)
    {
        cout << "Input student information for: " << i + 1 << endl;
        s[i].input();
        cout << endl;
    }
    cout << "..................Student Dtailes.............." << endl;
    for (i = 0; i < x; i++)
    {
        cout << "Output student information for: " << i + 1 << endl;
        ob2.output(s[i]);
        cout << endl;
    }
}