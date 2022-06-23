//
// Created by Giperx on 2022/6/5.
//

#include "GraduateTeacher.h"
//输入助教生信息，虚函数实现多态
void GraduateTeacher::Input()
{
    //先调用Graduate类的输入函数
    Graduate::Input();
    cout<<"输入助教职工号：";
    Teacher::setjobNum();
    cout<<"输入助教任职：";
    Teacher::setTitle();
}
////输出助教生信息，虚函数实现多态
void GraduateTeacher::Display()
{
    Graduate::Display();
    cout << "****************************************" << endl;
    cout << "**\t助教职工号："<< "\t" <<  Teacher::getjobNum() << "\t**" << endl;
    cout << "**\t助教任职："<< "\t" <<  Teacher::getTitle() << "\t**" << endl;
    cout << "****************************************" << endl;
}

