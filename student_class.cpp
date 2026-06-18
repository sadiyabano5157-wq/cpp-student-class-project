#include<iostream>
#include<string>

using namespace std;

class student
{
public:
    string name;
    int age;
    float marke;
};

int main()
{
    student s1;
    s1.name = "sadiya";
    s1.age = 18;
    s1.marke = 90.00;

    student s2;
    s2.name = "madiha";
    s2.age = 19;
    s2.marke = 88.00;

    student s3;
    s3.name = "Alina";
    s3.age = 17;
    s3.marke = 91.00;

    cout << "The name is : " << s1.name << endl;
    cout << "The age is : " << s1.age << endl;
    cout << "The marke is : " << s1.marke << endl;

    cout << "The name is : " << s2.name << endl;
    cout << "The age is : " << s2.age << endl;
    cout << "The marke is : " << s2.marke << endl;

    cout << "The name is : " << s3.name << endl;
    cout << "The age is : " << s3.age << endl;
    cout << "The marke is : " << s3.marke << endl;

    return 0;
}
