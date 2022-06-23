//
// Created by Giperx on 2022/6/3.
//

#ifndef VISITERMANAGESYSTEM_STUDENT_H
#define VISITERMANAGESYSTEM_STUDENT_H
#include "Person.h"
//本科生类，虚继承Person类
class Student : virtual public Person{
private:
    string number;                 //学号
public:
    Student():number("0"){}//
    ~Student(){} //析构函数
    void setNumber(){cin>>number;}
    string getNumber();
    virtual void Display();                      //输出信息，虚函数实现多态
    virtual void Input();                        //输入信息，虚函数实现多态
};

#endif //VISITERMANAGESYSTEM_STUDENT_H
