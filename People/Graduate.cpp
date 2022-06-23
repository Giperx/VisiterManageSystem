//
// Created by Giperx on 2022/6/5.
//

#include "Graduate.h"
void Graduate :: setMajor(){cin>>major;}
void Graduate :: setDirection(){cin>>direction;}

string Graduate::getMajor()         {return major;}

string Graduate::getDirection(){	return direction;}
//输出研究生信息，虚函数实现多态
void Graduate::Display()
{	Student::Display();
    cout << "****************************************" << endl;
    cout << "**\t专业：      "<< "\t" << getMajor() << "\t**" << endl;
    cout << "**\t研究方向：   "<< "\t" << getDirection() << "\t**" << endl;
    cout << "****************************************" << endl;
}
//输入研究生信息，虚函数实现多态
void Graduate::Input()
{	Student::Input();
    cout<<"输入专业名称：";
    setMajor();
    cout<<"输入研究的方向：";
    setDirection();
}