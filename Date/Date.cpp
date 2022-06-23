//
// Created by Giperx on 2022/6/5.
//

#include "Date.h"
using namespace std;
//获取日期
void Date::inputDate()
{
    cout<<" 请输入出生年月日(格式：年 月 日):";
    cin >> year >> month >> day;
}
//计算年龄
int Date::Age()
{
    int age;
    time_t now = time
            (0);
    tm* ltm = localtime(&now);//获取系统当前日期时间
    bool answer = Judge();
    //对输入的日期进行正确性检测
    while(!answer)
    {
        cout<<"输入生日错误，请重新输入："<<endl;
        cin >> year >> month >> day;
        answer=Judge();
    }
    //开始计算年龄
    age= (1900 + ltm -> tm_year ) - year - 1;
    if((ltm->tm_mon+ 1) > month)    age++;

    if((ltm-> tm_mon + 1) == month)
    {
        if(ltm->tm_mday >= day) age++;
    }
    return age;
}
//判断输入的年月日是否正确
bool Date::Judge()
{
    time_t now=time(0);
    tm*ltm=localtime(&now);
    //检测是否超过当前系统时间
    if (year > (1900 + ltm->tm_year))
        return false;
    else if (year == (1900 + ltm->tm_year) && month > (ltm->tm_mon + 1))
        return false;
    else if (year == (1900 + ltm->tm_year) && month == (ltm->tm_mon + 1) && day > (ltm->tm_mday))
        return false;

    if (year < 1900)
        return false;
    //判断月份是否输入正确
    if (month < 1 || month>12)
        return false;
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day <= 0 || day >= 31)
            return false;
    }
    else if (month == 2) { //闰年
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if (day > 29 || day < 1)
                return false;
        }
        else {
            if (day > 28 || day < 1)
                return false;
        }
    }
    else {
        if (day > 31 || day < 1)
            return false;
    }
    return true;
}