//
// Created by Giperx on 2022/6/5.
//

#ifndef VISITERMANAGESYSTEM_GRADUATE_H
#define VISITERMANAGESYSTEM_GRADUATE_H
#include "Student.h"
//研究生类，继承Student类
class Graduate:public Student{
private:
    string major; //攻读专业名称
    string direction; //攻读方向
public:
    Graduate():major("0"),direction("0"){}
    ~Graduate(){}
    void setMajor();
    void setDirection();
    string getMajor();
    string getDirection();
    //输出研究生信息，虚函数实现多态
    void Display();
    //输入研究生信息，虚函数实现多态
    void Input();
};

#endif //VISITERMANAGESYSTEM_GRADUATE_H
