#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee
{
  private:
    string name;
    double salary;
  public:
    Employee(const string &name, double salary) : name(name), salary(salary) {}
    void show() const {
      cout << "Name: " << name << endl;
      cout << "Salary: " << salary << endl;
    }
};

#endif // EMPLOYEE_H