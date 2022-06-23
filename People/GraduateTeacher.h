//
// Created by Giperx on 2022/6/5.
//

#ifndef VISITERMANAGESYSTEM_GRADUATETEACHER_H
#define VISITERMANAGESYSTEM_GRADUATETEACHER_H
#include "Graduate.h"
#include "Teacher.h"
//助教学生类，继承Graduate类和Teacher类
class GraduateTeacher : public Graduate, public Teacher{
public:
    GraduateTeacher(){}
    //输出助教生信息，虚函数实现多态
    void Display();
    //输入助教生信息，虚函数实现多态
    void Input();
};


#endif //VISITERMANAGESYSTEM_GRADUATETEACHER_H
