//
// Created by Giperx on 2022/6/3.
//

#include "Surface.h"
#include <fstream>
int count[5]={0};			//人数的计算
int cntRegt[4]={0};		//注册人数的计算
int count1=0;				//体温发热异常人数计算


//游客登录
void  Surface::Visitor()
{
    string cipher;
    int i=0;
    int op;
    char choice1,choice2;
    cout<<"················游客免密登陆·················" <<endl;
    ClassMenu();
    //Connection_two();		//调用Connection_two从而进行类的选择及功能操作
    do{
        do{
            //登陆方式的选择
            cout<<"请输入功能方式：";
            cin>>i;
            if(i<0||i>4)
            {
                cout<<"输入有误，请重新输入！"<<endl;
            }
        }while(i<0||i>4);		//检查输入是否错误
        flag1=i;
        switch(i)
        {
            case 1:
            case 2:
            case 3:
            case 4:
                do{
                    cout << "****************************************" << endl;
                    cout << "***************游客菜单******************" << endl;
                    cout << "****************************************" << endl;
                    cout << "*                                      *" << endl;
                    cout << "*               1.录入信息               *"<<endl;
                    cout << "*               2.输出信息               *"<<endl;
                    cout << "*               3.显示信息               *"<<endl;
                    cout << "*               4.查找信息               *"<<endl;
                    cout << "*                                      *" << endl;
                    cout << "****************************************" << endl;
                    do{
                        cout<<"请输入功能选择：";		//进行功能的选择
                        cin>>op;
                        if(op<0||op>4)
                        {
                            cout<<"输入有误，请重新输入！"<<endl;
                        }
                    }while(op<0||op>4);		//检查输入是否错误
                    switch(op)
                    {
                        case 1:		//进行输入操作
                            Input(flag1);
                            system("pause");
                            break;
                        case 2:		//进行输出操作
                            Output(flag1);
                            system("pause");
                            break;
                        case 3:		//进行显示操作
                            Output(flag1);
                            system("pause");
                            break;
                        case 4:		//进行查找操作
                            Search(flag1);
                            system("pause");
                            break;
                        default:
                            system("pause");
                            break;
                    }
                    getchar();
                    fflush(stdin);
                    cout<<"否要继续选择使用(Y/y) / (N/n):" <<endl;
                    cin>>choice1;
                }while(choice1=='y'||choice1=='Y');
                break;
            case 0:		//退出
                Connection_one();
                exit(0);
                break;
            default:
                break;
        }
        getchar();
        fflush(stdin);
        ClassMenu();
        cout<<"否要继续选择使用(Y/y) / (N/n):" <<endl;
        cin>>choice2;
    }while(choice2=='y'||choice2=='Y');
}
//注册
void Surface::Register()
{
    int i;
    ClassMenu(); 		//对象总菜单，选择人员对象
    cout<<"请选择注册类型：";
    do{
        cout<<"请输入类型选择：";
        cin>>i;
        if(i<0||i>4)
        {
            cout<<"输入有误，请重新输入。"<<endl;
        }
    }while(i<0||i>4);		//判断输入
    switch(i)
    {
        case 1:			//进行本科生注册
            cout<<"请输入账号："<<endl;
            student[count[0]].setAccount();		//账号注册
            cout<<"请输入密码:"<<endl;
            student[count[0]].setSecret();		//密码注册
            count[0]++;
            cntRegt[0]++;
            break;
        case 2:		//进行老师注册

            cout<<"请输入账号："<<endl;
            teacher[count[1]].setAccount();		//账号注册
            cout<<"请输入密码:"<<endl;
            teacher[count[1]].setSecret();		//密码注册
            count[1]++;
            cntRegt[1]++;
            break;
        case 3:		//进行研究生注册

            cout<<"请输入账号："<<endl;
            graduate[count[2]].setAccount();		//账号注册
            cout<<"请输入密码:"<<endl;
            graduate[count[2]].setSecret();		//密码注册
            count[2]++;
            cntRegt[2]++;
            break;
        case 4:		//进行助教学生注册

            cout<<"请输入账号："<<endl;
            GT[count[3]].setAccount();		//账号注册
            cout<<"请输入密码:"<<endl;
            GT[count[3]].setSecret();		//密码注册
            count[3]++;
            cntRegt[3]++;
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
    }
    cout<<"注册成功!"<<endl;
}
//登录
void Surface::Enter()
{
    char choice;
    int i,j,sum;
    int e=3,f=3,g=3,h=3;
    int flag=0;
    int identity=0;
    string s,a;
    do{
        cout<<"请输入账号:" <<endl;
        cin>>s;		//输入账号
        sum=count[0]+count[1]+count[2]+count[3];
        for(i=0;i<sum;i++)//开始依次枚举四类师生，进行判断
        {//本科生类
            for(j=0;j<count[0];j++)
            {
                if(s==student[j].getAccount())
                {//判断账号合法性
                    flag=1;
                    flag1=1;
                    do{
                        cout<<"请输入密码:" <<endl;
                        cin>>a;
                        e--;
                        if(a==student[j].getSecret())
                        {   //登陆成功
                            Connection_three(flag1);
                            break;
                        }
                        else
                        {
                            cout<<"密码输入错误，还有"<<e<<"次机会"<<endl; //错误密码
                            if(e==0)
                            {
                                break;	//密码错误三次后自动退出
                            }
                        }
                    }while(e>0);
                }
            }//老师类
            for(j=0;j<count[1];j++)
            {
                if(s==teacher[1].getAccount())
                {//判断账号合法性
                    flag=1;
                    flag1=2;
                    do{
                        cout<<"请输入密码:" <<endl;
                        cin>>a;		//输入密码
                        f--;
                        if(a==teacher[j].getSecret())
                        {//登陆成功
                            Connection_three(flag1);
                            break;
                        }
                        else
                        {
                            cout<<"密码输入错误，还有"<<f<<"次机会"<<endl;//错误密码
                            if(f==0)
                            {
                                break;
                            }
                        }
                    }while(f>0);
                }
            }//研究生类
            for(j=0;j<count[2];j++)
            {
                if(s==graduate[j].getAccount())
                {//判断账号合法性
                    flag=1;
                    flag1=3;
                    do{
                        cout<<"请输入密码:" <<endl;
                        cin>>a;
                        g--;
                        if(a==graduate[j].getSecret())
                        {//登陆成功
                            Connection_three(flag1);
                            break;
                        }
                        else
                        {
                            cout<<"密码输入错误，还有"<<g<<"次机会"<<endl;//错误密码
                            if(g==0)
                            {
                                break;
                            }
                        }
                    }while(g>0);
                }
            }//助教学生类
            for(j=0;j<count[3];j++)
            {
                if(s==GT[j].getAccount())		//判断账号信息
                {
                    flag=1;
                    flag1=4;
                    do{
                        cout<<"请输入密码:" <<endl;
                        cin>>a;
                        h--;
                        if(a==GT[j].getSecret())
                        {//登陆成功
                            Connection_three(flag1);
                            break;
                        }
                        else
                        {
                            cout<<"密码输入错误，还有"<<h<<"次机会"<<endl;//错误密码
                            if(h==0)
                            {
                                break;
                            }
                        }
                    }while(h>0);
                }
            }
        }
        if(flag==0)
        {
            cout<<"账号输入错误！"<<endl;
        }
        getchar();
        cout<<"否要重新输入账号？(Y/y)/(N/n):"<<endl;	//是否重新输入账号进行登录
        cin>>choice;
    }while(choice=='y'||choice=='Y');
}
//对象、功能选择
void Surface::Connection_one()
{
    int i;
    char decision;
    ListR();
    do{
        cout<<"请输入功能选择（数字）：" ;
        cin>>i;
        switch(i)
        {
            case 1:		//游客登录
                Visitor();
                break;
            case 2:		//登录
                Enter();
                break;
            case 3:		//注册
                Register();
                break;
            case 4:		//帮助
                Help();
                break;
            case 5:		//关于
                About();
                break;
            case 6:		//读取师生信息
                ReadInfo();
                break;
            case 0:
                exit(0);
                break;
            default:
                cout << "请重试！" << endl;
        }
        getchar();
        ListR();
        cout<<"否要继续选择使用(Y/y) / (N/n):" <<endl;
        cin>>decision;
    }while(decision=='y'||decision=='Y');
}
//登录方式选择
void Surface::Connection_two()
{
    int i,op;
    char choice1,choice2;
    cout<<"欢迎进入游客信息管理系统。\n\n"<<endl;
    ClassMenu();
    do{
        do{
            //登陆方式的选择
            cout<<"请输入功能方式：";
            cin>>i;
            if(i<0||i>4)
            {
                cout<<"输入有误，请重新输入！"<<endl;
            }
        }while(i<0||i>4);		//检查输入是否错误
        flag1=i;
        switch(i)
        {
            case 1:
            case 2:
            case 3:
            case 4:
                do{
                    Menu();
                    do{
                        cout<<"请输入功能选择：";		//进行功能的选择
                        cin>>op;
                        if(op<0||op>8)
                        {
                            cout<<"输入有误，请重新输入！"<<endl;
                        }
                    }while(op<0||op>8);		//检查输入是否错误
                    switch(op)
                    {
                        case 1:		//进行输入操作
                            Input(flag1);
                            system("pause");
                            break;
                        case 2:		//进行输出操作
                            Output(flag1);
                            system("pause");
                            break;
                        case 3:		//进行显示操作
                            Output(flag1);
                            system("pause");
                            break;
                        case 4:		//进行删除操作
                            Delete(flag1);
                            break;
                        case 5:		//进行修改操作
                            Modify(flag1);
                            break;
                        case 6: 	//进行搜索功能
                            Search(flag1);
                            break;
                        case 7: 	//进行写入文件
                            WriteInfo(flag1);
                            break;
                        default:
                            system("pause");
                            break;
                    }
                    getchar();
                    fflush(stdin);
                    cout<<"否要继续选择使用(Y/y) / (N/n):" <<endl;
                    cin>>choice1;
                }while(choice1=='y'||choice1=='Y');
                break;
            case 0:		//退出
                Connection_one();
                exit(0);
                break;
            default:
                break;
        }
        getchar();
        fflush(stdin);
        ClassMenu();
        cout<<"否要继续选择使用(Y/y) / (N/n):" <<endl;
        cin>>choice2;
    }while(choice2=='y'||choice2=='Y');
}
//登录中具体操作功能选择
void Surface::Connection_three(int identity)		//登录后的功能选择
{
    int op;
    char c;
    do{
        Menu();
        do{
            cout<<"请输入功能选择：";
            cin>>op;
            if(op<0||op>8)
            {
                cout<<"输入有误，请重新输入！"<<endl;
            }
        }while(op<0||op>8);
        switch(op)
        {
            case 1:		//输入
                Input(flag1);
                system("pause");
                break;
            case 2:		//输出
                Output(flag1);
                system("pause");
                break;
            case 3:		//显示
                Output(flag1);;
                system("pause");
                break;
            case 4:		//删除
                Delete(flag1);
                break;
            case 5:		//修改
                Modify(flag1);
                break;
            case 6: 	//查找
                Search(flag1);
                break;
            case 7: 	//写入文件
                WriteInfo(flag1);
                break;
            default:
                system("pause");
                break;
        }
        getchar();
        cout<<"否要继续选择使用(Y/y) / (N/n):" <<endl;
        cin>>c;
    }while(c=='y'||c=='Y');
}
//姓名查找函数：通过姓名查找人员信息
int Surface::SearchByName(int r)	//按名字查找
{
    system("cls");
    int flag=-1;
    string name1;
    cout<<"请输入姓名：";
    cin>>name1;
    for(int i=0;i<count[r-1];i++)
    {switch(r)
        {
            case 1:{	if(student[i].getName()==name1){student[i].Display();flag=i;}break;}
            case 2:{	if(teacher[i].getName()==name1){teacher[i].Display();flag=i;}break;}
            case 3:{	if(graduate[i].getName()==name1){graduate[i].Display();flag=i;}break;}
            case 4:{	if(GT[i].getName()==name1){GT[i].Display();flag=i;}break;}
        }
    }
    if(flag==-1)
    {	cout<<"未查到具体信息,,请核对姓名。"<<endl;}
    return flag;
}
//身份证查找函数：通过身份证号查找人员信息
int Surface::SearchById(int r)		//按身份证查找
{
    system("cls");
    int flag=-1;
    string num1;
    cout<<"请输入身份证号码：";
    cin>>num1;
    for(int i=0;i<count[r-1];i++)
    {switch(r)
        {
            case 1:{	if(student[i].getID()==num1){student[i].Display();flag=i;}break;}
            case 2:{	if(teacher[i].getID()==num1){teacher[i].Display();flag=i;}break;}
            case 3:{	if(graduate[i].getID()==num1){graduate[i].Display();flag=i;}break;}
            case 4:{	if(GT[i].getID()==num1){GT[i].Display();flag=i;}	break;}
        }
    }
    if(flag==-1)
    {cout<<"未查到具体信息,,请核对身份证号。"<<endl;}
    //system("pause");
    return flag;
}

//学号查找函数：通过学号或者工号查找人员信息
int Surface:: SearchByNum(int r)	//按学号/工号查找
{	system("cls");
    int flag=-1;
    string num1;
    for(int i=0;i<count[r-1];i++)
    {switch(r)
        {
            case 1: cout<<"请输入学号：";
                cin>>num1;
                if(student[i].getNumber()==num1)
                {
                    student[i].Display();
                    flag=i;
                }
                break;
            case 2: cout<<"请输入职工号：";
                cin>>num1;
                if(teacher[i].getjobNum()==num1)
                {
                    teacher[i].Display();
                    flag=i;
                }
                break;
            case 3: cout<<"请输入学号：";
                cin>>num1;
                if(graduate[i].getNumber()==num1)
                {
                    graduate[i].Display();
                    flag=i;
                }
                break;
            case 4: cout<<"请输入学号或职工号：";
                cin>>num1;
                if(GT[i].getNumber()==num1 || GT[i].getjobNum()==num1)
                {
                    GT[i].Display();
                    flag=i;
                }
                break;
        }
    }
    if(flag==-1)
    {cout<<"未查到具体信息,请核对学号或职工号。"<<endl;}
    //system("pause");
    return flag;
}

int Surface::Search(int r)
{
    system("cls");
    int h;
    ListS();
    cin>>h;
    switch(h)
    {	case 1:{SearchByName(r);break;}//按姓名查询信息
        case 2:{SearchByNum(r);break;}//按学号/职工号查询信息
        case 3:{SearchById(r);break;}//按身份证查询信息
    }
    //system("pause");
}

//删除，按学号或者职工号
void Surface::DeleteNum(int r)		//按学号/工号查找，然后进行删除
{	system("cls");
    int num1=SearchByNum(r);
    if(num1>=0)
    {	while(num1<count[r-1])
        {
            switch(r)
            {
                case 1: {	student[num1]=student[num1+1];break; }
                case 2: {	teacher[num1]=teacher[num1+1];break; }
                case 3: {	graduate[num1]=graduate[num1+1];break; }
                case 4: {	GT[num1]=GT[num1+1];break; }
            }
            num1++;
        }
        count[r-1]-- ;
        cout<<"删除成功！";
    }
    // system("pause");
}

//删除，按名字
void Surface::DeleteName(int r)		//按名字查找，然后进行删除
{	system("cls");
    int name1=SearchByName(r);
    if(name1>=0)
    {
        while(name1<count[r-1])
        {
            switch(r)
            {
                case 1: {	student[name1]=student[name1+1];break; }
                case 2: {	teacher[name1]=teacher[name1+1];break; }
                case 3: {	graduate[name1]=graduate[name1+1];break; }
                case 4: {	GT[name1]=GT[name1+1];break; }
            }
            name1++;
        }
        count[r-1]-- ;
        cout<<"删除成功！";
    }
    else
    {
        cout<<"未查到具体信息,,请核对姓名。"<<endl;
    }
    //system("pause");
}

//删除，按身份证
void Surface::DeleteId(int r)		 //按身份证查找，然后进行删除
{	system("cls");
    int ID1=SearchById(r);
    if(ID1>=0)
    {	while(ID1<count[r-1])
        {switch(r)
            {
                case 1: {	student[ID1]=student[ID1+1];break; }
                case 2: {	teacher[ID1]=teacher[ID1+1];break; }
                case 3: {	graduate[ID1]=graduate[ID1+1];break; }
                case 4: {	GT[ID1]=GT[ID1+1];break; }
            }
            ID1++;
        }
        count[r-1]-- ;
        cout<<"删除成功！";
    }
    else
    {
        cout<<"未查到具体信息,,请核对身份证号。"<<endl;
    }
    // system("pause");
}
//通过输入选择删除类型
void Surface::Delete(int r)
{
    system("cls");
    int h;
    cout << "****************************************" << endl;
    cout << "***************删除菜单******************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*             1.按姓名查找删除            *"<<endl;
    cout << "*             2.按学号或职工号查找删除     *"<<endl;
    cout << "*             3.按身份证查找删除          *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cin>>h;
    switch(h)
    {	case 1:{DeleteName(r);break;}//按姓名查询删除信息
        case 2:{DeleteNum(r);break;}//按学号或职工号查找删除
        case 3:{DeleteId(r);break;}//按身份证删除查询信息
    }
}
//修改名字
void Surface::ModifyName(int r)		//按名字查找，然后进行修改
{
    system("cls");
    int name1=SearchByName(r);
    if(name1>=0)
        switch(r)
        {
            case 1: ModifyStu(name1);break;
            case 2: ModifyTea(name1);break;
            case 3: ModifyGra(name1);break;
            case 4: ModifyGT(name1);break;
        }
    else
    {
        cout<<"未查到具体信息,请核对姓名。"<<endl;
    }
    // system("pause");
}

//修改学号或职工号
void Surface::ModifyNum(int r)		//按学号/工号查找，然后进行修改
{	system("cls");
    int num1=SearchByNum(r);
    if(num1>=0)
        switch(r)
        {
            case 1: ModifyStu(num1);break;
            case 2: ModifyTea(num1);break;
            case 3: ModifyGra(num1);break;
            case 4: ModifyGT(num1);break;
        }
    else
    {
        cout<<"未查到具体信息,,请核对学号或职工号。"<<endl;
    }
    //system("pause");
}

//修改身份证
void Surface::ModifyId(int r)		//按身份证查找，然后进行修改
{
    system("cls");
    int ID1=SearchById(r);
    if(ID1>=0)
        switch(r)
        {
            case 1: ModifyStu(ID1);break;
            case 2: ModifyTea(ID1);break;
            case 3: ModifyGra(ID1);break;
            case 4: ModifyGT(ID1);break;
        }
    else
    {
        cout<<"未查到具体信息,,请核对身份证号。"<<endl;
    }
    // system("pause");
}

//本科生修改总菜单
void Surface::  ModifyStu(int r)		//r为下标
{
    string newname,newnumber,newID;
    int ch;
    cout << "****************************************" << endl;
    cout << "***************修改菜单******************" << endl;
    cout << "*················修改···················*" << endl;
    cout << "****************************************" << endl;
    cout << "*···············本科生···················*" << endl;
    cout << "*                                      *" << endl;
    cout << "*             1.修改姓名                 *"<<endl;
    cout << "*             2.修改学号                 *"<<endl;
    cout << "*             3.修改身份证号              *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cout<<"输入修改选项：";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"请输入新的姓名：";
            student[r].setName();
            break;
        case 2:cout<<"请输入新的学号：";
            student[r].setNumber();
            break;
        case 3:cout<<"请输入新的身份证号：";
            student[r].setID();
            break;
    }
    cout<<"修改成功！";
}

//研究生修改总菜单
void Surface::ModifyGra(int r)
{
    string newname,newnumber,newID;
    int ch;
    cout << "****************************************" << endl;
    cout << "***************修改菜单******************" << endl;
    cout << "*················修改···················*" << endl;
    cout << "****************************************" << endl;
    cout << "*···············研究生···················*" << endl;
    cout << "*             1.修改姓名                 *"<<endl;
    cout << "*             2.修改学号                 *"<<endl;
    cout << "*             3.修改身份证号              *"<<endl;
    cout << "*             4.修改专业                 *"<<endl;
    cout << "*             5.修改研究方向             *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cout<<"输入修改选项：";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"请输入新的姓名：";
            graduate[r-1].setName();
            break;
        case 2:cout<<"请输入新的学号：";
            graduate[r-1].setNumber();
            break;
        case 3:cout<<"请输入新的身份证号：";
            graduate[r-1].setID();
            break;
        case 4:cout << "输入新的专业名称：";
            graduate[r - 1].setMajor();
            break;
        case 5:cout << "输入新的研究方向名称：";
            graduate[r - 1].setDirection();
            break;
    }
    cout<<"修改成功！";
}

//老师修改总菜单
void Surface::ModifyTea(int r)
{
    string newname,newnumber,newID;
    int ch;
    cout << "****************************************" << endl;
    cout << "***************修改菜单******************" << endl;
    cout << "*················修改···················*" << endl;
    cout << "****************************************" << endl;
    cout << "*···············老师···················*" << endl;
    cout << "*             1.修改姓名                 *"<<endl;
    cout << "*             2.修改职工号               *"<<endl;
    cout << "*             3.修改身份证号              *"<<endl;
    cout << "*             4.修改任职                 *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cout<<"输入修改选项：";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"请输入新的姓名：";
            teacher[r-1].setName();
            break;
        case 2:cout<<"请输入新的学号：";
            teacher[r-1].setjobNum();
            break;
        case 3:cout<<"请输入新的身份证号：";
            teacher[r-1].setID();
            break;
        case 4:cout<<"请输入新的任职：";
            teacher[r-1].setTitle();
            break;
    }
    cout<<"修改成功！";
}

//助教学生修改总菜单
void Surface::ModifyGT(int r)
{
    string newname,newnumber,newID;
    int ch;
    int i=4;
    cout << "****************************************" << endl;
    cout << "***************修改菜单******************" << endl;
    cout << "*················修改···················*" << endl;
    cout << "****************************************" << endl;
    cout << "*···············助教学生·················*" << endl;
    cout << "*             1.修改姓名                 *"<<endl;
    cout << "*             2.修改学号或临时职工号       *"<<endl;
    cout << "*             3.修改身份证号              *"<<endl;
    cout << "*             4.修改临时任职            *"<<endl;
    cout << "*             5.修改专业                 *"<<endl;
    cout << "*             6.修改研究方向             *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cout<<"输入修改选项：";
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"请输入新的姓名：";
            GT[r-1].setName();
            break;
        case 2: int cho;
            cout<<"你想修改的是学号还是职工号？"<<endl;
            cout<<"1.学号"<<endl;
            cout<<"2.职工号"<<endl;
            cout<<"请输入你的选择：";
            cin>>cho;
            switch(cho)
            {
                case 1: cout<<"请输入新的学号：";
                    GT[r-1].setNumber();
                    break;
                case 2: cout<<"请输入新的职工号：";
                    GT[r-1].setjobNum();
                    break;
            }
            break;
        case 3: cout<<"请输入新的身份证号：";
            GT[r-1].setID();
            break;
        case 4: cout<<"请输入新的任职：";
            GT[r-1].setTitle();
            break;
        case 5: cout<<"请输入新的专业：";
            GT[r-1].setMajor();
            break;
        case 6: cout<<"请输入新的研究方向：";
            GT[r-1].setDirection();
            break;

    }
    cout<<"修改成功！";
}
//通过输入选择修改类型
void Surface::Modify(int r)
{

    int h;
    cout << "****************************************" << endl;
    cout << "***************修改菜单******************" << endl;
    cout << "*················检索···················*" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*             1.按姓名查找并修改信息       *"<<endl;
    cout << "*             2.按学号或职工号查找并修改信息 *"<<endl;
    cout << "*             3.按身份证查找并修改信息     *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cin>>h;
    switch(h)
    {	case 1:{ModifyName(r);break;} //按姓名查找并修改信息
        case 2:{ModifyNum(r);break;} //按学号或职工号查找并修改信息
        case 3:{ModifyId(r);break;} //按身份证查找并修改信息
    }
    system("pause");
}
//输入函数，根据原先选择的人员类型进行定向调用
void Surface::Input(int r)
{
    switch(r)
    {
        case 1:
        {
            InputTemplate(student,1);
            break;
        }
        case 2:
        {
            InputTemplate(teacher,2);
            break;
        }
        case 3:
        {
            InputTemplate(graduate,3);
            break;
        }
        case 4:
        {
            InputTemplate(GT,4);
            break;
        }
        case 0:
        {
            exit(0);		//选择0，退出
            break;
        }
        default:
        {
            cout<<"输入错误！请重新输入。"<<endl;
            break;
        }
    }
}
//输出函数，按人员类型依次进行输出具体信息
void Surface::Output(int r)
{
    //使用STL模板库中的标准函数对象
    count[4]=accumulate(count, count + 4, 1)-1;
    switch(r)
    {
        case 1:
        {
            cout << "****************************************" << endl;
            cout << "*··当前已有"<<count[0]<<"名学生已添加信息········*" << endl;
            cout << "*·······总添加人数为：" << count[4] << "······*" << endl;
            cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
            OutputTemplate(student,1);
            cout << "****************************************" << endl;
            break;
        }
        case 2:
        {
            cout << "****************************************" << endl;
            cout << "*··当前已有"<<count[1]<<"名老师已添加信息········*" << endl;
            cout << "*·······总添加人数为：" << count[4] << "······*" << endl;
            cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
            OutputTemplate(teacher,2);
            cout << "****************************************" << endl;
            break;
        }
        case 3:
        {
            cout << "****************************************" << endl;
            cout << "*··当前已有"<<count[2]<<"名研究生已添加信息········*" << endl;
            cout << "*·······总添加人数为：" << count[4] << "······*" << endl;
            cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
            OutputTemplate(graduate,3);
            cout << "****************************************" << endl;
            break;
        }
        case 4:
        {
            cout << "****************************************" << endl;
            cout << "*··当前已有"<<count[3]<<"名助教学生已添加信息········*" << endl;
            cout << "*·······总添加人数为：" << count[4] << "······*" << endl;
            cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
            OutputTemplate(GT,4);
            cout << "****************************************" << endl;
            break;
        }
        case 0:
        {
            cout<<"欢迎下次使用。"<<endl;
            exit(0);
            break;
        }
        default:
        {
            cout<<"输入错误！请重新输入。"<<endl;
        }
    }
}
//相应的输入函数模板
template <class T>
void Surface::InputTemplate(T* array,int r)
{
    int i=0;
    if(cntRegt[r-1]!=0)
    {
        count[r-1]=count[r-1]-cntRegt[r-1];
        cntRegt[r-1]--;
    }
    int j=count[r-1];		//j表示对应的身份现在的人数
    for(i=0;i<j+1;i++)
    {
        if(array[i].getName()=="0")		//如果未添加
        {
            array[i].Input();
            cout<<endl;
            count[r-1]++;				//成功添加，则对应的count+1
            if(array[i].getCondition()=="疑似发热，禁止自由行动")
            {
                count1++;			//发热人数+1
            }
        }
    }
}
//相应的人员信息显示函数模板
template <class T>
void Surface:: OutputTemplate(T* array,int r)
{
    int i=0;
    cout<<"发热人数共计为："<<count1<<endl;
    for(i=0;i<count[r-1];i++)
    {
        if(array[i].getName()!="0")
        {
            array[i].Display();
            cout<<endl;
        }
    }

}
//总菜单，选择人员对象
void Surface::ClassMenu()
{
    cout << "****************************************" << endl;
    cout << "****************总菜单********************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*               1.本科生                *"<<endl;
    cout << "*               2.老师                  *"<<endl;
    cout << "*               3.研究生                 *"<<endl;
    cout << "*               4.助教学生               *"<<endl;
    cout << "*               0.退出                  *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
}
//主菜单，选择功能
void Surface::Menu()
{
    cout << "****************************************" << endl;
    cout << "*****************菜单********************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*               1.录入信息               *"<<endl;
    cout << "*               2.输出信息               *"<<endl;
    cout << "*               3.显示信息               *"<<endl;
    cout << "*               4.删除信息               *"<<endl;
    cout << "*               5.修改信息               *"<<endl;
    cout << "*               6.查找信息               *"<<endl;
    cout << "*               7.写入文件               *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
}
//关于
void Surface::About()
{
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*          名称：游客信息管理系统          *"<<endl;
    cout << "*          版本：V2.1                   *"<<endl;
    cout << "*          完成时间：2022年6月6日         *"<<endl;
    cout << "*          作者：熊志鹏8008120400        *"<<endl;
    cout << "*               班级：2014班             *"<<endl;
    cout << "*               学号：8008120400        *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
}
//帮助
void Surface::Help()
{
    cout << "****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*面向高校的游客信息管理系统，可以选择游客登入  *"<<endl;
    cout << "*就可无需密码；                           *" << endl;
    cout << "*也可以注册信息后再进行登陆。（需要密码）      *"<<endl;
    cout << "*该系统具有基本的增删改查功能，便捷的对师生的信息*" << endl;
    cout << "*进行管理和查看。                          *" << endl;
    cout << "*                                       *" << endl;
    cout << "****************************************" << endl;
}

//分菜单，选择查找方式
void Surface::ListS()
{
    cout << "****************************************" << endl;
    cout << "***************查找菜单******************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*               1.按姓名查找             *"<<endl;
    cout << "*               2.按学号或职工号查找      *"<<endl;
    cout << "*               3.按身份证查找           *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
}
//分菜单，首页
void Surface::ListR()
{
    cout << "****************************************" << endl;
    cout << "*```````````游客信息管理系统``````````````*" << endl;
    cout << "****************首页********************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*               1.游客进入              *"<<endl;
    cout << "*               2.登陆                 *"<<endl;
    cout << "*               3.注册                 *"<<endl;
    cout << "*               4.帮助                 *"<<endl;
    cout << "*               5.关于                 *"<<endl;
    cout << "*               6.读取师生信息          *"<<endl;
    cout << "*               0.退出                 *"<<endl;
    cout << "*                                     *" << endl;
    cout << "****************************************" << endl;
}

//写入文件
void Surface::WriteInfo(int flag1) {

    streambuf* coutBuf = cout.rdbuf();

    ofstream of("E:\\data\\cpp\\VisiterManageSystem\\Info\\Info.txt");
    // 获取文件Info.txt流缓冲区指针
    streambuf* fileBuf = of.rdbuf();
    cout << "开始写入文件操作！" << endl;
    // 设置cout流缓冲区指针为Info.txt的流缓冲区指针
    cout.rdbuf(fileBuf);
    Output(flag1);
    of.flush();
    of.close();
    // 恢复cout原来的流缓冲区指针
    cout.rdbuf(coutBuf);
    cout << "写入完毕！" << endl;
    system("PAUSE");
}

//读取师生信息
void Surface::ReadInfo() {
    fstream fin("E:\\data\\cpp\\VisiterManageSystem\\Info\\Info.txt"); //打开文件
    string readline;
    while (getline(fin, readline)) //逐行读取，直到结束
    {
        cout <<  readline << endl;
    }
}