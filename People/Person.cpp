//
// Created by Giperx on 2022/6/3.
//

#include "Person.h"
void Person::setName(){cin>>name;}
void Person::setID()
{ //判断输入的身份证号码是否为十八位数
    string idTmp;
    cin >> idTmp;
    while(idTmp.size() != 18){
        cout << "请输入正确十八位身份证！"<< endl;
        cin >> idTmp;
    }
    ID = idTmp;
}
void Person::setAge()
{
    age = date.Age();
}
void Person::setAccount(){cin >> account;}

void Person::setSecret(){cin >> secret;}

void Person::setTemperature(){cin>>temperature;}

void Person::setCondition(){cin>>condition;}


string Person:: getName()         {	return name;}          //提取姓名

string Person::getID() {	return ID;}                     //提取身份证


int Person::getAge()     {	return age;}                  //提取年龄


string Person::getAccount(){return account;}


string Person::getSecret(){return secret;}


float Person::getTemperature(){return temperature;}


string Person::getCondition(){return condition;}

//判断健康状况
void Person::judgeCondition()
{
    //判断下限体温
    if(getTemperature()-34 < 10e-7)
    {
        condition = "体温偏低";
        cout << "************************" << endl;
        cout << "*      警告：体温异常！   *" << endl;
        cout << "*      体温过低！        *" << endl;
        cout << "************************" << endl;
    }
    //判断上限体温
    else if(getTemperature()-37.2 > 10e-7)
    {
        condition = "疑似发热，禁止自由行动";
        cout << "************************" << endl;
        cout << "*      警告：体温异常！   *" << endl;
        cout << "************************" << endl;
        cout << "************************" << endl;
        cout << "*                      *" << endl;
        cout << "*      体温过高！        *" << endl;
        cout << "* 请联系负责人进行隔离观察！*" << endl;
        cout << "* 请联系负责人进行隔离观察！*" << endl;
        cout << "* 请联系负责人进行隔离观察！*" << endl;
        cout << "*                      *" << endl;
        cout << "************************" << endl;
        cout << "************************" << endl;
    }
    else
    {
        cout << "************************\n"
             << "*      温度             *\n"
             << "*      正常             *\n"
             << "************************" << endl;
        condition = "温度正常";
    }
}