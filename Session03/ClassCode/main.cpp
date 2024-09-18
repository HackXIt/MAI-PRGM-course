#include <iostream>


int main()
{
    Person p1("Max");
    Person p2 = p1;

    std::cout << "Name: " << p2.getName() << std::endl;

    Student s1("Tom", "Math");
    Student s2 = s1;
    std::cout << "Name: " << s2.getName() << std::endl;

    Person* studentPtr = new Student("John", "Math");
    Person* studentPtr2 = studentPtr;


    return 0;
}
