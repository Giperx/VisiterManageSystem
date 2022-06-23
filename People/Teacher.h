//
// Created by Giperx on 2022/6/3.
//

#ifndef VISITERMANAGESYSTEM_TEACHER_H
#define VISITERMANAGESYSTEM_TEACHER_H
#include "Person.h"
// 老师职工类，虚继承Person类
class Teacher : virtual public Person{
private:
    string jobNum; // 职工号
    string title;	//任职
public:
    Teacher():jobNum("0"),title("0"){}
    ~Teacher(){}
    void setjobNum();
    void setTitle();
    string getjobNum();
    string getTitle();
    //输出老师信息，虚函数实现多态
    void Display();
    //输入老师信息，虚函数实现多态
    void Input();
};


#endif //VISITERMANAGESYSTEM_TEACHER_H
