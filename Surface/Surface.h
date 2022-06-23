//
// Created by Giperx on 2022/6/3.
//

#ifndef VISITERMANAGESYSTEM_SURFACE_H
#define VISITERMANAGESYSTEM_SURFACE_H

#include<cstring>
#include<numeric>
#include "../People/Teacher.h"
#include "../People/Student.h"
#include "../People/Graduate.h"
#include "../People/GraduateTeacher.h"
using namespace std;
const int N = 100;

//界面类，含有所有的具体功能选择界面，以及各个界面中的功能函数
class Surface{
private: // 声明四种类型的师生，各声明为一个对象数组，100人
    Student student[N];
    Teacher teacher[N];
    Graduate graduate[N];
    GraduateTeacher GT[N];
    int flag1;

public:
    //三个登陆选择界面
    void Connection_one();		//对象、功能选择
    void Connection_two();		//登录方式选择
    void Connection_three(int identity); //登录中具体操作功能选择
    //各显示界面函数
    void ListR();	//分菜单，首页
    void ClassMenu();	//总菜单，选择人员对象
    void Menu();		//主菜单，选择功能
    void ListS();	//分菜单，选择查找方式
    void About();	//分页面，关于About
    void Help();	//分页面，帮助Help
    void Visitor();		//游客登录
    void Register();	//注册
    void Enter();	//登录
    //各查找相关函数
    int Search(int r);		//通过输入选择查找类型
    int SearchByName(int r);	//查找，按名字
    int SearchByNum(int r);	//查找，按学号或者职工号
    int SearchById(int r);		//查找，按身份证
    //各删除相关函数
    void Delete(int r);			//通过输入选择删除类型
    void DeleteName(int r);		//删除，按名字
    void DeleteNum(int r);		//删除，按学号或者职工号
    void DeleteId(int r);		 //删除，按身份证
    //各修改相关函数
    void Modify(int r);			//通过输入选择修改类型
    void ModifyName(int r);		//修改名字
    void ModifyNum(int r);		//修改学号或职工号
    void ModifyId(int r);		//修改身份证
    void ModifyStu(int r);      //本科生修改总菜单
    void ModifyGra(int r);      //研究生修改总菜单
    void ModifyTea(int r);      //老师修改总菜单
    void ModifyGT(int r);       //助教学生修改总菜单

    void Input(int r);	//输入函数，根据原先选择的人员类型进行定向调用
    template <class T>//相应的输入函数模板
    void InputTemplate(T* array,int r);

    void Output(int r);	//输出函数，按人员类型依次进行输出具体信息
    template <class T>//相应的人员信息显示函数模板
    void OutputTemplate(T* array,int r);

    //文件操作
    void ReadInfo(); //读取师生信息
    void WriteInfo(int); //写入文件
};

#endif //VISITERMANAGESYSTEM_SURFACE_H
