//
// Created by Giperx on 2022/6/3.
//

#include "Surface.h"
#include <fstream>
int count[5]={0};			//�����ļ���
int cntRegt[4]={0};		//ע�������ļ���
int count1=0;				//���·����쳣��������


//�ο͵�¼
void  Surface::Visitor()
{
    string cipher;
    int i=0;
    int op;
    char choice1,choice2;
    cout<<"���������������������������������ο����ܵ�½����������������������������������" <<endl;
    ClassMenu();
    //Connection_two();		//����Connection_two�Ӷ��������ѡ�񼰹��ܲ���
    do{
        do{
            //��½��ʽ��ѡ��
            cout<<"�����빦�ܷ�ʽ��";
            cin>>i;
            if(i<0||i>4)
            {
                cout<<"�����������������룡"<<endl;
            }
        }while(i<0||i>4);		//��������Ƿ����
        flag1=i;
        switch(i)
        {
            case 1:
            case 2:
            case 3:
            case 4:
                do{
                    cout << "****************************************" << endl;
                    cout << "***************�οͲ˵�******************" << endl;
                    cout << "****************************************" << endl;
                    cout << "*                                      *" << endl;
                    cout << "*               1.¼����Ϣ               *"<<endl;
                    cout << "*               2.�����Ϣ               *"<<endl;
                    cout << "*               3.��ʾ��Ϣ               *"<<endl;
                    cout << "*               4.������Ϣ               *"<<endl;
                    cout << "*                                      *" << endl;
                    cout << "****************************************" << endl;
                    do{
                        cout<<"�����빦��ѡ��";		//���й��ܵ�ѡ��
                        cin>>op;
                        if(op<0||op>4)
                        {
                            cout<<"�����������������룡"<<endl;
                        }
                    }while(op<0||op>4);		//��������Ƿ����
                    switch(op)
                    {
                        case 1:		//�����������
                            Input(flag1);
                            system("pause");
                            break;
                        case 2:		//�����������
                            Output(flag1);
                            system("pause");
                            break;
                        case 3:		//������ʾ����
                            Output(flag1);
                            system("pause");
                            break;
                        case 4:		//���в��Ҳ���
                            Search(flag1);
                            system("pause");
                            break;
                        default:
                            system("pause");
                            break;
                    }
                    getchar();
                    fflush(stdin);
                    cout<<"��Ҫ����ѡ��ʹ��(Y/y) / (N/n):" <<endl;
                    cin>>choice1;
                }while(choice1=='y'||choice1=='Y');
                break;
            case 0:		//�˳�
                Connection_one();
                exit(0);
                break;
            default:
                break;
        }
        getchar();
        fflush(stdin);
        ClassMenu();
        cout<<"��Ҫ����ѡ��ʹ��(Y/y) / (N/n):" <<endl;
        cin>>choice2;
    }while(choice2=='y'||choice2=='Y');
}
//ע��
void Surface::Register()
{
    int i;
    ClassMenu(); 		//�����ܲ˵���ѡ����Ա����
    cout<<"��ѡ��ע�����ͣ�";
    do{
        cout<<"����������ѡ��";
        cin>>i;
        if(i<0||i>4)
        {
            cout<<"�����������������롣"<<endl;
        }
    }while(i<0||i>4);		//�ж�����
    switch(i)
    {
        case 1:			//���б�����ע��
            cout<<"�������˺ţ�"<<endl;
            student[count[0]].setAccount();		//�˺�ע��
            cout<<"����������:"<<endl;
            student[count[0]].setSecret();		//����ע��
            count[0]++;
            cntRegt[0]++;
            break;
        case 2:		//������ʦע��

            cout<<"�������˺ţ�"<<endl;
            teacher[count[1]].setAccount();		//�˺�ע��
            cout<<"����������:"<<endl;
            teacher[count[1]].setSecret();		//����ע��
            count[1]++;
            cntRegt[1]++;
            break;
        case 3:		//�����о���ע��

            cout<<"�������˺ţ�"<<endl;
            graduate[count[2]].setAccount();		//�˺�ע��
            cout<<"����������:"<<endl;
            graduate[count[2]].setSecret();		//����ע��
            count[2]++;
            cntRegt[2]++;
            break;
        case 4:		//��������ѧ��ע��

            cout<<"�������˺ţ�"<<endl;
            GT[count[3]].setAccount();		//�˺�ע��
            cout<<"����������:"<<endl;
            GT[count[3]].setSecret();		//����ע��
            count[3]++;
            cntRegt[3]++;
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
    }
    cout<<"ע��ɹ�!"<<endl;
}
//��¼
void Surface::Enter()
{
    char choice;
    int i,j,sum;
    int e=3,f=3,g=3,h=3;
    int flag=0;
    int identity=0;
    string s,a;
    do{
        cout<<"�������˺�:" <<endl;
        cin>>s;		//�����˺�
        sum=count[0]+count[1]+count[2]+count[3];
        for(i=0;i<sum;i++)//��ʼ����ö������ʦ���������ж�
        {//��������
            for(j=0;j<count[0];j++)
            {
                if(s==student[j].getAccount())
                {//�ж��˺źϷ���
                    flag=1;
                    flag1=1;
                    do{
                        cout<<"����������:" <<endl;
                        cin>>a;
                        e--;
                        if(a==student[j].getSecret())
                        {   //��½�ɹ�
                            Connection_three(flag1);
                            break;
                        }
                        else
                        {
                            cout<<"����������󣬻���"<<e<<"�λ���"<<endl; //��������
                            if(e==0)
                            {
                                break;	//����������κ��Զ��˳�
                            }
                        }
                    }while(e>0);
                }
            }//��ʦ��
            for(j=0;j<count[1];j++)
            {
                if(s==teacher[1].getAccount())
                {//�ж��˺źϷ���
                    flag=1;
                    flag1=2;
                    do{
                        cout<<"����������:" <<endl;
                        cin>>a;		//��������
                        f--;
                        if(a==teacher[j].getSecret())
                        {//��½�ɹ�
                            Connection_three(flag1);
                            break;
                        }
                        else
                        {
                            cout<<"����������󣬻���"<<f<<"�λ���"<<endl;//��������
                            if(f==0)
                            {
                                break;
                            }
                        }
                    }while(f>0);
                }
            }//�о�����
            for(j=0;j<count[2];j++)
            {
                if(s==graduate[j].getAccount())
                {//�ж��˺źϷ���
                    flag=1;
                    flag1=3;
                    do{
                        cout<<"����������:" <<endl;
                        cin>>a;
                        g--;
                        if(a==graduate[j].getSecret())
                        {//��½�ɹ�
                            Connection_three(flag1);
                            break;
                        }
                        else
                        {
                            cout<<"����������󣬻���"<<g<<"�λ���"<<endl;//��������
                            if(g==0)
                            {
                                break;
                            }
                        }
                    }while(g>0);
                }
            }//����ѧ����
            for(j=0;j<count[3];j++)
            {
                if(s==GT[j].getAccount())		//�ж��˺���Ϣ
                {
                    flag=1;
                    flag1=4;
                    do{
                        cout<<"����������:" <<endl;
                        cin>>a;
                        h--;
                        if(a==GT[j].getSecret())
                        {//��½�ɹ�
                            Connection_three(flag1);
                            break;
                        }
                        else
                        {
                            cout<<"����������󣬻���"<<h<<"�λ���"<<endl;//��������
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
            cout<<"�˺��������"<<endl;
        }
        getchar();
        cout<<"��Ҫ���������˺ţ�(Y/y)/(N/n):"<<endl;	//�Ƿ����������˺Ž��е�¼
        cin>>choice;
    }while(choice=='y'||choice=='Y');
}
//���󡢹���ѡ��
void Surface::Connection_one()
{
    int i;
    char decision;
    ListR();
    do{
        cout<<"�����빦��ѡ�����֣���" ;
        cin>>i;
        switch(i)
        {
            case 1:		//�ο͵�¼
                Visitor();
                break;
            case 2:		//��¼
                Enter();
                break;
            case 3:		//ע��
                Register();
                break;
            case 4:		//����
                Help();
                break;
            case 5:		//����
                About();
                break;
            case 6:		//��ȡʦ����Ϣ
                ReadInfo();
                break;
            case 0:
                exit(0);
                break;
            default:
                cout << "�����ԣ�" << endl;
        }
        getchar();
        ListR();
        cout<<"��Ҫ����ѡ��ʹ��(Y/y) / (N/n):" <<endl;
        cin>>decision;
    }while(decision=='y'||decision=='Y');
}
//��¼��ʽѡ��
void Surface::Connection_two()
{
    int i,op;
    char choice1,choice2;
    cout<<"��ӭ�����ο���Ϣ����ϵͳ��\n\n"<<endl;
    ClassMenu();
    do{
        do{
            //��½��ʽ��ѡ��
            cout<<"�����빦�ܷ�ʽ��";
            cin>>i;
            if(i<0||i>4)
            {
                cout<<"�����������������룡"<<endl;
            }
        }while(i<0||i>4);		//��������Ƿ����
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
                        cout<<"�����빦��ѡ��";		//���й��ܵ�ѡ��
                        cin>>op;
                        if(op<0||op>8)
                        {
                            cout<<"�����������������룡"<<endl;
                        }
                    }while(op<0||op>8);		//��������Ƿ����
                    switch(op)
                    {
                        case 1:		//�����������
                            Input(flag1);
                            system("pause");
                            break;
                        case 2:		//�����������
                            Output(flag1);
                            system("pause");
                            break;
                        case 3:		//������ʾ����
                            Output(flag1);
                            system("pause");
                            break;
                        case 4:		//����ɾ������
                            Delete(flag1);
                            break;
                        case 5:		//�����޸Ĳ���
                            Modify(flag1);
                            break;
                        case 6: 	//������������
                            Search(flag1);
                            break;
                        case 7: 	//����д���ļ�
                            WriteInfo(flag1);
                            break;
                        default:
                            system("pause");
                            break;
                    }
                    getchar();
                    fflush(stdin);
                    cout<<"��Ҫ����ѡ��ʹ��(Y/y) / (N/n):" <<endl;
                    cin>>choice1;
                }while(choice1=='y'||choice1=='Y');
                break;
            case 0:		//�˳�
                Connection_one();
                exit(0);
                break;
            default:
                break;
        }
        getchar();
        fflush(stdin);
        ClassMenu();
        cout<<"��Ҫ����ѡ��ʹ��(Y/y) / (N/n):" <<endl;
        cin>>choice2;
    }while(choice2=='y'||choice2=='Y');
}
//��¼�о����������ѡ��
void Surface::Connection_three(int identity)		//��¼��Ĺ���ѡ��
{
    int op;
    char c;
    do{
        Menu();
        do{
            cout<<"�����빦��ѡ��";
            cin>>op;
            if(op<0||op>8)
            {
                cout<<"�����������������룡"<<endl;
            }
        }while(op<0||op>8);
        switch(op)
        {
            case 1:		//����
                Input(flag1);
                system("pause");
                break;
            case 2:		//���
                Output(flag1);
                system("pause");
                break;
            case 3:		//��ʾ
                Output(flag1);;
                system("pause");
                break;
            case 4:		//ɾ��
                Delete(flag1);
                break;
            case 5:		//�޸�
                Modify(flag1);
                break;
            case 6: 	//����
                Search(flag1);
                break;
            case 7: 	//д���ļ�
                WriteInfo(flag1);
                break;
            default:
                system("pause");
                break;
        }
        getchar();
        cout<<"��Ҫ����ѡ��ʹ��(Y/y) / (N/n):" <<endl;
        cin>>c;
    }while(c=='y'||c=='Y');
}
//�������Һ�����ͨ������������Ա��Ϣ
int Surface::SearchByName(int r)	//�����ֲ���
{
    system("cls");
    int flag=-1;
    string name1;
    cout<<"������������";
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
    {	cout<<"δ�鵽������Ϣ,,��˶�������"<<endl;}
    return flag;
}
//���֤���Һ�����ͨ�����֤�Ų�����Ա��Ϣ
int Surface::SearchById(int r)		//�����֤����
{
    system("cls");
    int flag=-1;
    string num1;
    cout<<"���������֤���룺";
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
    {cout<<"δ�鵽������Ϣ,,��˶����֤�š�"<<endl;}
    //system("pause");
    return flag;
}

//ѧ�Ų��Һ�����ͨ��ѧ�Ż��߹��Ų�����Ա��Ϣ
int Surface:: SearchByNum(int r)	//��ѧ��/���Ų���
{	system("cls");
    int flag=-1;
    string num1;
    for(int i=0;i<count[r-1];i++)
    {switch(r)
        {
            case 1: cout<<"������ѧ�ţ�";
                cin>>num1;
                if(student[i].getNumber()==num1)
                {
                    student[i].Display();
                    flag=i;
                }
                break;
            case 2: cout<<"������ְ���ţ�";
                cin>>num1;
                if(teacher[i].getjobNum()==num1)
                {
                    teacher[i].Display();
                    flag=i;
                }
                break;
            case 3: cout<<"������ѧ�ţ�";
                cin>>num1;
                if(graduate[i].getNumber()==num1)
                {
                    graduate[i].Display();
                    flag=i;
                }
                break;
            case 4: cout<<"������ѧ�Ż�ְ���ţ�";
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
    {cout<<"δ�鵽������Ϣ,��˶�ѧ�Ż�ְ���š�"<<endl;}
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
    {	case 1:{SearchByName(r);break;}//��������ѯ��Ϣ
        case 2:{SearchByNum(r);break;}//��ѧ��/ְ���Ų�ѯ��Ϣ
        case 3:{SearchById(r);break;}//�����֤��ѯ��Ϣ
    }
    //system("pause");
}

//ɾ������ѧ�Ż���ְ����
void Surface::DeleteNum(int r)		//��ѧ��/���Ų��ң�Ȼ�����ɾ��
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
        cout<<"ɾ���ɹ���";
    }
    // system("pause");
}

//ɾ����������
void Surface::DeleteName(int r)		//�����ֲ��ң�Ȼ�����ɾ��
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
        cout<<"ɾ���ɹ���";
    }
    else
    {
        cout<<"δ�鵽������Ϣ,,��˶�������"<<endl;
    }
    //system("pause");
}

//ɾ���������֤
void Surface::DeleteId(int r)		 //�����֤���ң�Ȼ�����ɾ��
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
        cout<<"ɾ���ɹ���";
    }
    else
    {
        cout<<"δ�鵽������Ϣ,,��˶����֤�š�"<<endl;
    }
    // system("pause");
}
//ͨ������ѡ��ɾ������
void Surface::Delete(int r)
{
    system("cls");
    int h;
    cout << "****************************************" << endl;
    cout << "***************ɾ���˵�******************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*             1.����������ɾ��            *"<<endl;
    cout << "*             2.��ѧ�Ż�ְ���Ų���ɾ��     *"<<endl;
    cout << "*             3.�����֤����ɾ��          *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cin>>h;
    switch(h)
    {	case 1:{DeleteName(r);break;}//��������ѯɾ����Ϣ
        case 2:{DeleteNum(r);break;}//��ѧ�Ż�ְ���Ų���ɾ��
        case 3:{DeleteId(r);break;}//�����֤ɾ����ѯ��Ϣ
    }
}
//�޸�����
void Surface::ModifyName(int r)		//�����ֲ��ң�Ȼ������޸�
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
        cout<<"δ�鵽������Ϣ,��˶�������"<<endl;
    }
    // system("pause");
}

//�޸�ѧ�Ż�ְ����
void Surface::ModifyNum(int r)		//��ѧ��/���Ų��ң�Ȼ������޸�
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
        cout<<"δ�鵽������Ϣ,,��˶�ѧ�Ż�ְ���š�"<<endl;
    }
    //system("pause");
}

//�޸����֤
void Surface::ModifyId(int r)		//�����֤���ң�Ȼ������޸�
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
        cout<<"δ�鵽������Ϣ,,��˶����֤�š�"<<endl;
    }
    // system("pause");
}

//�������޸��ܲ˵�
void Surface::  ModifyStu(int r)		//rΪ�±�
{
    string newname,newnumber,newID;
    int ch;
    cout << "****************************************" << endl;
    cout << "***************�޸Ĳ˵�******************" << endl;
    cout << "*���������������������������������޸ġ�������������������������������������*" << endl;
    cout << "****************************************" << endl;
    cout << "*��������������������������������������������������������������������������*" << endl;
    cout << "*                                      *" << endl;
    cout << "*             1.�޸�����                 *"<<endl;
    cout << "*             2.�޸�ѧ��                 *"<<endl;
    cout << "*             3.�޸����֤��              *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cout<<"�����޸�ѡ�";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"�������µ�������";
            student[r].setName();
            break;
        case 2:cout<<"�������µ�ѧ�ţ�";
            student[r].setNumber();
            break;
        case 3:cout<<"�������µ����֤�ţ�";
            student[r].setID();
            break;
    }
    cout<<"�޸ĳɹ���";
}

//�о����޸��ܲ˵�
void Surface::ModifyGra(int r)
{
    string newname,newnumber,newID;
    int ch;
    cout << "****************************************" << endl;
    cout << "***************�޸Ĳ˵�******************" << endl;
    cout << "*���������������������������������޸ġ�������������������������������������*" << endl;
    cout << "****************************************" << endl;
    cout << "*�������������������������������о�����������������������������������������*" << endl;
    cout << "*             1.�޸�����                 *"<<endl;
    cout << "*             2.�޸�ѧ��                 *"<<endl;
    cout << "*             3.�޸����֤��              *"<<endl;
    cout << "*             4.�޸�רҵ                 *"<<endl;
    cout << "*             5.�޸��о�����             *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cout<<"�����޸�ѡ�";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"�������µ�������";
            graduate[r-1].setName();
            break;
        case 2:cout<<"�������µ�ѧ�ţ�";
            graduate[r-1].setNumber();
            break;
        case 3:cout<<"�������µ����֤�ţ�";
            graduate[r-1].setID();
            break;
        case 4:cout << "�����µ�רҵ���ƣ�";
            graduate[r - 1].setMajor();
            break;
        case 5:cout << "�����µ��о��������ƣ�";
            graduate[r - 1].setDirection();
            break;
    }
    cout<<"�޸ĳɹ���";
}

//��ʦ�޸��ܲ˵�
void Surface::ModifyTea(int r)
{
    string newname,newnumber,newID;
    int ch;
    cout << "****************************************" << endl;
    cout << "***************�޸Ĳ˵�******************" << endl;
    cout << "*���������������������������������޸ġ�������������������������������������*" << endl;
    cout << "****************************************" << endl;
    cout << "*��������������������������������ʦ��������������������������������������*" << endl;
    cout << "*             1.�޸�����                 *"<<endl;
    cout << "*             2.�޸�ְ����               *"<<endl;
    cout << "*             3.�޸����֤��              *"<<endl;
    cout << "*             4.�޸���ְ                 *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cout<<"�����޸�ѡ�";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"�������µ�������";
            teacher[r-1].setName();
            break;
        case 2:cout<<"�������µ�ѧ�ţ�";
            teacher[r-1].setjobNum();
            break;
        case 3:cout<<"�������µ����֤�ţ�";
            teacher[r-1].setID();
            break;
        case 4:cout<<"�������µ���ְ��";
            teacher[r-1].setTitle();
            break;
    }
    cout<<"�޸ĳɹ���";
}

//����ѧ���޸��ܲ˵�
void Surface::ModifyGT(int r)
{
    string newname,newnumber,newID;
    int ch;
    int i=4;
    cout << "****************************************" << endl;
    cout << "***************�޸Ĳ˵�******************" << endl;
    cout << "*���������������������������������޸ġ�������������������������������������*" << endl;
    cout << "****************************************" << endl;
    cout << "*����������������������������������ѧ������������������������������������*" << endl;
    cout << "*             1.�޸�����                 *"<<endl;
    cout << "*             2.�޸�ѧ�Ż���ʱְ����       *"<<endl;
    cout << "*             3.�޸����֤��              *"<<endl;
    cout << "*             4.�޸���ʱ��ְ            *"<<endl;
    cout << "*             5.�޸�רҵ                 *"<<endl;
    cout << "*             6.�޸��о�����             *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cout<<"�����޸�ѡ�";
    cin>>ch;
    switch(ch)
    {
        case 1: cout<<"�������µ�������";
            GT[r-1].setName();
            break;
        case 2: int cho;
            cout<<"�����޸ĵ���ѧ�Ż���ְ���ţ�"<<endl;
            cout<<"1.ѧ��"<<endl;
            cout<<"2.ְ����"<<endl;
            cout<<"���������ѡ��";
            cin>>cho;
            switch(cho)
            {
                case 1: cout<<"�������µ�ѧ�ţ�";
                    GT[r-1].setNumber();
                    break;
                case 2: cout<<"�������µ�ְ���ţ�";
                    GT[r-1].setjobNum();
                    break;
            }
            break;
        case 3: cout<<"�������µ����֤�ţ�";
            GT[r-1].setID();
            break;
        case 4: cout<<"�������µ���ְ��";
            GT[r-1].setTitle();
            break;
        case 5: cout<<"�������µ�רҵ��";
            GT[r-1].setMajor();
            break;
        case 6: cout<<"�������µ��о�����";
            GT[r-1].setDirection();
            break;

    }
    cout<<"�޸ĳɹ���";
}
//ͨ������ѡ���޸�����
void Surface::Modify(int r)
{

    int h;
    cout << "****************************************" << endl;
    cout << "***************�޸Ĳ˵�******************" << endl;
    cout << "*��������������������������������������������������������������������������*" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*             1.���������Ҳ��޸���Ϣ       *"<<endl;
    cout << "*             2.��ѧ�Ż�ְ���Ų��Ҳ��޸���Ϣ *"<<endl;
    cout << "*             3.�����֤���Ҳ��޸���Ϣ     *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
    cin>>h;
    switch(h)
    {	case 1:{ModifyName(r);break;} //���������Ҳ��޸���Ϣ
        case 2:{ModifyNum(r);break;} //��ѧ�Ż�ְ���Ų��Ҳ��޸���Ϣ
        case 3:{ModifyId(r);break;} //�����֤���Ҳ��޸���Ϣ
    }
    system("pause");
}
//���뺯��������ԭ��ѡ�����Ա���ͽ��ж������
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
            exit(0);		//ѡ��0���˳�
            break;
        }
        default:
        {
            cout<<"����������������롣"<<endl;
            break;
        }
    }
}
//�������������Ա�������ν������������Ϣ
void Surface::Output(int r)
{
    //ʹ��STLģ����еı�׼��������
    count[4]=accumulate(count, count + 4, 1)-1;
    switch(r)
    {
        case 1:
        {
            cout << "****************************************" << endl;
            cout << "*������ǰ����"<<count[0]<<"��ѧ���������Ϣ����������������*" << endl;
            cout << "*�����������������������Ϊ��" << count[4] << "������������*" << endl;
            cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
            OutputTemplate(student,1);
            cout << "****************************************" << endl;
            break;
        }
        case 2:
        {
            cout << "****************************************" << endl;
            cout << "*������ǰ����"<<count[1]<<"����ʦ�������Ϣ����������������*" << endl;
            cout << "*�����������������������Ϊ��" << count[4] << "������������*" << endl;
            cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
            OutputTemplate(teacher,2);
            cout << "****************************************" << endl;
            break;
        }
        case 3:
        {
            cout << "****************************************" << endl;
            cout << "*������ǰ����"<<count[2]<<"���о����������Ϣ����������������*" << endl;
            cout << "*�����������������������Ϊ��" << count[4] << "������������*" << endl;
            cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
            OutputTemplate(graduate,3);
            cout << "****************************************" << endl;
            break;
        }
        case 4:
        {
            cout << "****************************************" << endl;
            cout << "*������ǰ����"<<count[3]<<"������ѧ���������Ϣ����������������*" << endl;
            cout << "*�����������������������Ϊ��" << count[4] << "������������*" << endl;
            cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*" << endl;
            OutputTemplate(GT,4);
            cout << "****************************************" << endl;
            break;
        }
        case 0:
        {
            cout<<"��ӭ�´�ʹ�á�"<<endl;
            exit(0);
            break;
        }
        default:
        {
            cout<<"����������������롣"<<endl;
        }
    }
}
//��Ӧ�����뺯��ģ��
template <class T>
void Surface::InputTemplate(T* array,int r)
{
    int i=0;
    if(cntRegt[r-1]!=0)
    {
        count[r-1]=count[r-1]-cntRegt[r-1];
        cntRegt[r-1]--;
    }
    int j=count[r-1];		//j��ʾ��Ӧ��������ڵ�����
    for(i=0;i<j+1;i++)
    {
        if(array[i].getName()=="0")		//���δ���
        {
            array[i].Input();
            cout<<endl;
            count[r-1]++;				//�ɹ���ӣ����Ӧ��count+1
            if(array[i].getCondition()=="���Ʒ��ȣ���ֹ�����ж�")
            {
                count1++;			//��������+1
            }
        }
    }
}
//��Ӧ����Ա��Ϣ��ʾ����ģ��
template <class T>
void Surface:: OutputTemplate(T* array,int r)
{
    int i=0;
    cout<<"������������Ϊ��"<<count1<<endl;
    for(i=0;i<count[r-1];i++)
    {
        if(array[i].getName()!="0")
        {
            array[i].Display();
            cout<<endl;
        }
    }

}
//�ܲ˵���ѡ����Ա����
void Surface::ClassMenu()
{
    cout << "****************************************" << endl;
    cout << "****************�ܲ˵�********************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*               1.������                *"<<endl;
    cout << "*               2.��ʦ                  *"<<endl;
    cout << "*               3.�о���                 *"<<endl;
    cout << "*               4.����ѧ��               *"<<endl;
    cout << "*               0.�˳�                  *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
}
//���˵���ѡ����
void Surface::Menu()
{
    cout << "****************************************" << endl;
    cout << "*****************�˵�********************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*               1.¼����Ϣ               *"<<endl;
    cout << "*               2.�����Ϣ               *"<<endl;
    cout << "*               3.��ʾ��Ϣ               *"<<endl;
    cout << "*               4.ɾ����Ϣ               *"<<endl;
    cout << "*               5.�޸���Ϣ               *"<<endl;
    cout << "*               6.������Ϣ               *"<<endl;
    cout << "*               7.д���ļ�               *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
}
//����
void Surface::About()
{
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*          ���ƣ��ο���Ϣ����ϵͳ          *"<<endl;
    cout << "*          �汾��V2.1                   *"<<endl;
    cout << "*          ���ʱ�䣺2022��6��6��         *"<<endl;
    cout << "*          ���ߣ���־��8008120400        *"<<endl;
    cout << "*               �༶��2014��             *"<<endl;
    cout << "*               ѧ�ţ�8008120400        *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
}
//����
void Surface::Help()
{
    cout << "****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*�����У���ο���Ϣ����ϵͳ������ѡ���ο͵���  *"<<endl;
    cout << "*�Ϳ��������룻                           *" << endl;
    cout << "*Ҳ����ע����Ϣ���ٽ��е�½������Ҫ���룩      *"<<endl;
    cout << "*��ϵͳ���л�������ɾ�Ĳ鹦�ܣ���ݵĶ�ʦ������Ϣ*" << endl;
    cout << "*���й���Ͳ鿴��                          *" << endl;
    cout << "*                                       *" << endl;
    cout << "****************************************" << endl;
}

//�ֲ˵���ѡ����ҷ�ʽ
void Surface::ListS()
{
    cout << "****************************************" << endl;
    cout << "***************���Ҳ˵�******************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*               1.����������             *"<<endl;
    cout << "*               2.��ѧ�Ż�ְ���Ų���      *"<<endl;
    cout << "*               3.�����֤����           *"<<endl;
    cout << "*                                      *" << endl;
    cout << "****************************************" << endl;
}
//�ֲ˵�����ҳ
void Surface::ListR()
{
    cout << "****************************************" << endl;
    cout << "*```````````�ο���Ϣ����ϵͳ``````````````*" << endl;
    cout << "****************��ҳ********************" << endl;
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*               1.�οͽ���              *"<<endl;
    cout << "*               2.��½                 *"<<endl;
    cout << "*               3.ע��                 *"<<endl;
    cout << "*               4.����                 *"<<endl;
    cout << "*               5.����                 *"<<endl;
    cout << "*               6.��ȡʦ����Ϣ          *"<<endl;
    cout << "*               0.�˳�                 *"<<endl;
    cout << "*                                     *" << endl;
    cout << "****************************************" << endl;
}

//д���ļ�
void Surface::WriteInfo(int flag1) {

    streambuf* coutBuf = cout.rdbuf();

    ofstream of("E:\\data\\cpp\\VisiterManageSystem\\Info\\Info.txt");
    // ��ȡ�ļ�Info.txt��������ָ��
    streambuf* fileBuf = of.rdbuf();
    cout << "��ʼд���ļ�������" << endl;
    // ����cout��������ָ��ΪInfo.txt����������ָ��
    cout.rdbuf(fileBuf);
    Output(flag1);
    of.flush();
    of.close();
    // �ָ�coutԭ������������ָ��
    cout.rdbuf(coutBuf);
    cout << "д����ϣ�" << endl;
    system("PAUSE");
}

//��ȡʦ����Ϣ
void Surface::ReadInfo() {
    fstream fin("E:\\data\\cpp\\VisiterManageSystem\\Info\\Info.txt"); //���ļ�
    string readline;
    while (getline(fin, readline)) //���ж�ȡ��ֱ������
    {
        cout <<  readline << endl;
    }
}