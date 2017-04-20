/*------------------------------------------------------
 Authors:
            Kevin Huang - khuan028@ucr.edu
            Emilio Barreiro - ebarr006@ucr.edu
      TA:   Christina Pavlopoulou
 Section:   022
------------------------------------------------------*/

#include <iostream>
using namespace std;

class Base {
    public:
        Base() {};
        virtual double evaluate() = 0;
};

// Represents a number
class Op : public Base {
    protected:
        double val;

    public:
        Op(double a) : val(a) {}
        virtual double evaluate() {
            return val;
        }
};



/*--------------------------------------
** Abstract Base Classes
----------------------------------------*/
class Oper1 : public Base {
    protected:
        Base* o1;

    public:
        Oper1(Base *a) : o1(a) {}
        virtual double evaluate() = 0;
};

class Oper2 : public Base {
    protected:
        Base* o1;
        Base* o2;

    public:
        Oper2(Base *a, Base *b) : o1(a), o2(b) {}
        virtual double evaluate() = 0;
};

/*---------------------------------------
** Operators
-----------------------------------------*/
class Mult : public Oper2 {
    public:
        Mult(Base *a, Base *b) : Oper2(a,b) {}
        virtual double evaluate() {
            return o1->evaluate() * o2->evaluate();
        }
};

class Div : public Oper2 {
    public:
        Div(Base *a, Base *b) : Oper2(a,b) {}
        virtual double evaluate() {
            return o1->evaluate() / o2->evaluate();
        }
};

class Add : public Oper2 {
    public:
        Add(Base *a, Base *b) : Oper2(a,b) {}
        virtual double evaluate() {
            return o1->evaluate() + o2->evaluate();
        }
};

class Sub : public Oper2 {
    public:
        Sub(Base *a, Base *b) : Oper2(a,b) {}
        virtual double evaluate() {
            return o1->evaluate() - o2->evaluate();
        }
};

class Sqr : public Oper1 {
    public:
        Sqr(Base *a) : Oper1(a) {}
        virtual double evaluate() {
            return o1->evaluate() * o1->evaluate();
        }
};

int main()
{
  Op lhs(5);
  Op rhs(6);
  Op six(6);
  Op three(3);
  Op seven(7);
  Op* opPtr = new Op(3);
  Op* opPtr2 = new Op(5.13);

  cout << "lhs.evaluate: " << lhs.evaluate() << endl;
  cout << "rhs.evaluate: " << rhs.evaluate() << endl;

  Mult m1(&lhs, &rhs);
  cout << "m1: Multiplying lhs and rhs: " << m1.evaluate() << endl; // expecting 30

  Div d1(&m1, &three);
  cout << "d1: Dividing m1 by three: " << d1.evaluate() << endl;  // expecting 10

  Add a1(&d1, &seven);
  cout << "a1: Adding d1 and seven: " << a1.evaluate() << endl; // expecting 17

  Sub s1(opPtr, opPtr2);
  cout << "s1: Subtracting 5.13 from 3: " << s1.evaluate() << endl; // expecting -2.13

  Sqr sq1(opPtr);
  cout << "sq1: Squaring 3: " << sq1.evaluate() << endl; // expecting 9


  return 0;
}
