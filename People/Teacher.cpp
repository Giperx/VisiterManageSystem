//
// Created by Giperx on 2022/6/3.
//

#include "Teacher.h"
void Teacher::setjobNum(){cin>>jobNum;}
void Teacher::setTitle() {cin>>title;}
string Teacher::getjobNum()    {return jobNum;}
string Teacher::getTitle() {	return title;}
//输入老师信息，虚函数实现多态
void Teacher::Input()
{
    cout<<"输入姓名：";
    Person::setName();
    Person::setID();
    date.inputDate();
    Person::setAge();
    cout<<"输入职工号：";
    setjobNum();
    cout<<"输入任职：";
    setTitle();
    cout<<"输入当前体温：";
    Person::setTemperature();
    //判断健康状况
    Person::judgeCondition();
}
//输出老师信息，虚函数实现多态
void Teacher::Display()
{
    cout << "****************************************" << endl;
    cout << "**\t姓名：      "<< "\t" << Person::getName() << "\t**" << endl;
    cout << "**\t年龄：      "<< "\t" << Person::getAge() << "\t**" << endl;
    cout << "**\t职工号：    "<< "\t" << getjobNum() << "\t**" << endl;
    cout << "**\t任职：      "<< "\t" << getTitle() << "\t**" << endl;
    cout << "**\t身份证号：   "<< "\t" << Person::getID() << "\t**" << endl;
    cout << "**\t体温：       "<< "\t" << Person::getTemperature() << "\t**" << endl;
    cout << "**\t当前健康状况："<< "\t" << Person::getCondition() << "\t**" << endl;
    cout << "****************************************" << endl;
}
