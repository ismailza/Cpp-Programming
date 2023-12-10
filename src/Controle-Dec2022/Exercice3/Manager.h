#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

using namespace std;

class Manager : public Employee
{
  private:
    string service;
  public:
    Manager(const string &name, double salary, const string &service) : Employee(name, salary), service(service) {}
    void show() const {
      Employee::show();
      cout << "Service: " << service << endl;
    }
};

#endif // MANAGER_H