//
// Created by Giperx on 2022/6/3.
//

#ifndef VISITERMANAGESYSTEM_PERSON_H
#define VISITERMANAGESYSTEM_PERSON_H
#include "../Date/Date.h"
#include <iostream>
using namespace std;
//几种师生类的虚基类，抽象类
class Person {
private:
    string name;                     //姓名
    string ID;                     //身份证
    int age;                         //年龄
    string account;                  //账号
    string secret;					//密码
    float temperature;  				//体温
    string condition;				//健康状况

public:class Date date; //出生日期
public:
    Person():name("0"),ID("0"),age(0),account("0"),secret("0"),temperature(0),condition("0"){}//默认构造函数
    ~Person(){} //析构函数
    void setName();                //存储姓名
    void setID();                     //存储身份证
    void setAge();			//存储年龄
    void setAccount();					//存储账号
    void setSecret();						//存储密码
    void setTemperature();				//存储温度
    void setCondition();      		    //存储健康状况
    string getName();                   //提取姓名
    string getID();                      //提取身份证
    int getAge();                       //提取年龄
    string getAccount();				//提取账号
    string getSecret();					//提取密码
    float getTemperature();				//提取温度
    string getCondition();				//提取健康状况
    void judgeCondition();				//根据体温判断身体状况
    virtual void Input() = 0;                        //获取输入，纯虚函数
    virtual void Display() = 0;                      //显示，纯虚函数
};

#endif //VISITERMANAGESYSTEM_PERSON_H
