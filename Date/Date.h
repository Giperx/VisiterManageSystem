//
// Created by Giperx on 2022/6/5.
//

#ifndef VISITERMANAGESYSTEM_DATE_H
#define VISITERMANAGESYSTEM_DATE_H
#include<iostream>
#include<string>
#include<cstring>
#include<ctime>
//日期类
class Date {
private:
    int year; //年
    int month; //月
    int	day; //日
public:
    Date ():year(0),month(0),day(0){}//默认构造函数，对年月日进行初始化
    void inputDate();   //获取出生日期
    int Age();  //计算年龄
    bool Judge();   // 判断输入的年月日是否正确
};


#endif //VISITERMANAGESYSTEM_DATE_H
