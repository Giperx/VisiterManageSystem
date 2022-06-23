//
// Created by Giperx on 2022/6/3.
//

#include "Student.h"
string Student::getNumber()   {return number;}
//输入信息，虚函数实现多态
void Student::Input()
{
    cout<<"输入姓名：";
    setName();
    //调用父类设置身份证号码
    cout<<"输入身份证号码：";
    Person::setID();
    date.inputDate();
    Person::setAge();
    cout<<"输入学号：";
    setNumber();
    cout<<"输入当前体温：";
    Person::setTemperature();
    //判断健康状况
    Person::judgeCondition();
}
//输出信息，虚函数实现多态
void Student::Display()
{
    cout << "****************************************" << endl;
    cout << "**\t姓名：      "<< "\t" << Person::getName() << "\t**\t" << endl;
    cout << "**\t年龄：      "<< "\t" << Person::getAge() << "\t**\t" << endl;
    cout << "**\t学号：      "<< "\t" << getNumber() << "\t**\t" << endl;
    cout << "**\t身份证号：   "<< "\t" << Person::getID() << "\t**\t" << endl;
    cout << "**\t体温：       "<< "\t" << Person::getTemperature() << "\t**\t" << endl;
    cout << "**\t当前健康状况："<< "\t" << Person::getCondition() << "\t**\t" << endl;
    cout << "****************************************" << endl;
}

