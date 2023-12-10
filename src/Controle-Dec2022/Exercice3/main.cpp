#include <iostream>
#include <string>

#include "Manager.h"
#include "Person.h"

int main()
{
  Employee emp1("Emp1", 1000), emp2("Emp2", 2000);
  Manager mgr1("Mgr1", 3000, "Service1"), mgr2("Mgr2", 4000, "Service2");
  Person<Employee*> person1;
  person1.add(&emp1);
  person1.add(&emp2);
  person1.show();
  Person<Manager*> person2;
  person2.add(&mgr1);
  person2.add(&mgr2);
  person2.show();
  
  return 0;
}