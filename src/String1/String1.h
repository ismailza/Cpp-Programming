#ifndef STRING1_H
#define STRING1_H

class String1
{
  private:
    char *_p;
  
  public:
    String1(const char *);
    ~String1();
    char *affiche();
};

#endif