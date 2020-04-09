#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
const int N = 100;
using namespace std;
class Person
{
public:
	int num;
	string name;
	string sex;
	int age;
	Person(int n = 0, string nm = "", string s = "", int a = 0) :num(n), name(nm), sex(s), age(a) {};
	virtual void Input() {};
	virtual void output() {};
	int GetNum() { return num; }
	string GetName() { return name; }
};
class Teacher :virtual public Person
{
public:
	string depart;
	string major;
	string title;
	int choice1;
	int choice2;
	Teacher(int n = 0, string nm = "", string s = "��", int a = 0, string d = "�����", string ma = "", string t = "") :Person(n, nm, s, a), depart(d), major(ma), title(t) {};
	void Input()
	{
		cout << "��������:" << endl;
		cin >> num;
		cout << "����������:" << endl;
		cin >> name;
		cout << "�������Ա�:" << endl;
		cout << "(1.�� 2.Ů)" << endl;
		cout << "���������ѡ��:" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:sex = "��"; break;
		case 2:sex = "Ů"; break;
		default:cout << "�������" << endl; break;
		}
		cout << "����������:" << endl;
		cin >> age;
		cout << "����������ϵ��:" << setw(10) << "1.���������ϵ" << setw(10) << "2.���ӹ���ϵ" << setw(10) << "3.����ϵ" << setw(10) << "4.����ϵ" << setw(10) << "5.�����밲ȫϵ" << endl;
		cout << "���������ѡ��" << endl;
		cin >> choice1;
		switch (choice1)
		{
		case 1:depart = "���������ϵ"; break;
		case 2:depart = "���ӹ���ϵ"; break;
		case 3:depart = "����ϵ"; break;
		case 4:depart = "����ϵ"; break;
		case 5:depart = "�����밲ȫϵ"; break;
		default:cout << "�������" << endl; break;
		}
		cout << "������רҵ����:" << endl;
		cin >> major;
		cout << "������ְ��:" << endl;
		cin >> title;
	}
	void Output()
	{
		cout << setw(10) << "���" << setw(10) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << setw(10) << "ϵ��" << setw(10) << "רҵ" << setw(10) << "ְ��" << endl;
		cout << setw(10) << num << setw(10) << name << setw(10) << sex << setw(10) << age << setw(10) << depart << setw(10) << major << setw(10) << title << endl;
	}
};
class Staff :virtual public Person
{
public:
	string zzmm;
	string zc;
	int choice2;
	Staff(int n = 0, string nm = "", string s = "��", int a = 0, string z = "", string zc = "") :Person(n, nm, s, a), zzmm(z), zc(zc) {};
	void Input()
	{
		cout << "��������:" << endl;
		cin >> num;
		cout << "����������:" << endl;
		cin >> name;
		cout << "�������Ա�:" << endl;
		cout << "(1.�� 2.Ů)" << endl;
		cout << "���������ѡ��:" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:sex = "��"; break;
		case 2:sex = "Ů"; break;
		default:cout << "�������" << endl; break;
		}
		cout << "����������:" << endl;
		cin >> age;
		cout << "������������ò:" << endl;
		cin >> zzmm;
		cout << "������ְ��:" << endl;
		cin >> zc;
	}
	void Output()
	{
		cout << setw(10) << "���" << setw(10) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << setw(10) << "������ò" << setw(10) << "ְ��" << endl;
		cout << setw(10) << num << setw(10) << name << setw(10) << sex << setw(10) << age << setw(10) << zzmm << setw(10) << zc << endl;
	}
};
class Experimenter :public Person
{
public:
	string library;
	string zw;
	int choice2;
	Experimenter(int n = 0, string nm = "", string s = "��", int a = 0, string l = "", string z = "") :Person(n, nm, s, a), library(l), zw(z) {};
	void Input()
	{
		cout << "��������:" << endl;
		cin >> num;
		cout << "����������:" << endl;
		cin >> name;
		cout << "�������Ա�:" << endl;
		cout << "(1.�� 2.Ů)" << endl;
		cout << "���������ѡ��:" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:sex = "��"; break;
		case 2:sex = "Ů"; break;
		default:cout << "�������" << endl; break;
		}
		cout << "����������:" << endl;
		cin >> age;
		cout << "������ʵ����:" << endl;
		cin >> library;
		cout << "������ְ��:" << endl;
		cin >> zw;
	}
	void Output()
	{
		cout << setw(10) << "���" << setw(10) << " ����" << setw(10) << " �Ա�" << setw(10) << "����" << setw(10) << "ʵ����" << setw(10) << "ְ��" << endl;
		cout << setw(10) << num << setw(10) << name << setw(10) << sex << setw(10) << age << setw(10) << library << setw(10) << zw << endl;
	}
};
class Tea_Sta :public Teacher, public Staff
{
public:
	int choice1;
	int choice2;
	Tea_Sta(int n = 0, string nm = "", string s = "��", int a = 0, string d = "", string ma = "", string t = "", string z = "", string zc = "") :Person(n, nm, s, a), Teacher(n, nm, s, a, d, ma, t), Staff(n, nm, s, a, z, zc) {};
	void Input()
	{
		cout << "��������:" << endl;
		cin >> num;
		cout << "����������:" << endl;
		cin >> name;
		cout << "�������Ա�:" << endl;
		cout << "(1.�� 2.Ů)" << endl;
		cout << "���������ѡ��:" << endl;
		cin >> choice2;
		switch (choice2)
		{
		case 1:sex = "��"; break;
		case 2:sex = "Ů"; break;
		default:cout << "�������" << endl; break;
		}
		cout << "����������:" << endl;
		cin >> age;
		cout << "����������ϵ��:" << endl;
		cin >> depart;
		cout << setw(10) << "1.���������ϵ" << setw(10) << "2.���ӹ���ϵ" << setw(10) << "3.����ϵ" << setw(10) << "4.����ϵ" << setw(10) << "5.�����밲ȫϵ" << endl;
		cout << "���������ѡ��" << endl;
		cin >> choice1;
		switch (choice1)
		{
		case 1:depart = "���������ϵ"; break;
		case 2:depart = "���ӹ���ϵ"; break;
		case 3:depart = "����ϵ"; break;
		case 4:depart = "����ϵ"; break;
		case 5:depart = "�����밲ȫϵ"; break;
		default:cout << "�������" << endl; break;
		}
		cout << "������רҵ����:" << endl;
		cin >> major;
		cout << "������ְ��:" << endl;
		cin >> title;
		cout << "������������ò:" << endl;
		cin >> zzmm;
		cout << "������ְ��:" << endl;
		cin >> zc;
	}
	void Output()
	{
		cout << setw(10) << "���" << setw(10) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << setw(10) << "ϵ��" << setw(10) << "רҵ" << setw(10) << "ְ��" << setw(10) << "������ò" << setw(10) << "ְ��" << endl;
		cout << setw(10) << num << setw(10) << name << setw(10) << sex << setw(10) << age << setw(10) << depart << setw(10) << major << setw(10) << title << setw(10) << zzmm << setw(10) << zc << endl;
	}
};
class Exp_Manage
{
	Experimenter Tea[N];
	int top;
public:
	Exp_Manage()
	{
        cout << "������ʵ��Ա����:";
		cin >> top;
		if (top != 0)
		{
			cout << "������ʵ��Ա����Ϣ:" << endl;
			cout << "��� ���� �Ա� ����   ʵ����   ְ��" << endl;
			for (int i = 0; i < top; i++)
				cin >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].library >> Tea[i].zw;
		}
	}
	void Add();
	void Show();
	void Search();
	void Edit();
	void Delete();
	void Total();
	void Save();
	void Read();
};
void Exp_Manage::Add()
{
	int m;
	if (top >= N)
	{
		cout << "�û�����" << endl;
		return;
	}
	Experimenter t;
	cout << "��������ӵ���Ա����Ŀ��" << endl;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		if (t.GetNum() == Tea[i].GetNum())
		{
			cout << "�ñ�ŵ����Ѵ���" << endl;
		break;
		}
		else
		cout << "��������ӵ���Ա����Ϣ��" << endl;
	    t.Input();
	}
	Tea[top] = t;
	top = top + m;
	cout << "��ӳɹ���" << endl;
}
void Exp_Manage::Show()
{
	if (top == 0)
	{
		cout << "�����ݣ�" << endl;
		return;
	}
	/*cout << setw(10) << "���" << setw(10) << "����" << setw(10) << "�Ա�" << setw(10) << "����" << setw(10) << "ʵ����" << setw(10) << "ְ��" << endl;*/
	for (int i = 0; i < top; i++)
		Tea[i].Output();
}
void Exp_Manage::Search()
{
	if (top == 0)
	{
		cout << "��ǰϵͳ��û�д洢��¼��" << endl;
		return;
	}
	int choice;
	cout << "��ѡ���ѯ��ʽ��1.����Ų��� 2.����������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "������Ҫ���ҵı�ţ�" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetNum() == num)
			{
				Tea[i].Output();
				return;
			}
		}
		cout << "���޴��ˣ�" << endl;
	} break;
	case 2:
	{
		cout << "������Ҫ���ҵ�������" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetName() == name)
			{
				Tea[i].Output();
			}
		}
		for (int i = 0; i < top; i++)
			if (Tea[i].GetName() == name)
				return;
		cout << "���޴��ˣ�" << endl;
	} break;
	default:cout << "�޴�ѡ������ԣ�" << endl; break;
	}
}
void Exp_Manage::Edit()
{
	if (top == 0)
	{
		cout << "��ǰϵͳû�д洢��¼��" << endl;
		return;
	}
	int num;
	cout << "������Ҫ���ҵı�ţ�" << endl;
	cin >> num;
	for (int i = 0; i < top; i++)
	{
		if (Tea[i].GetNum() == num)
		{
			cout << "�����λʵ��Ա����Ϣ�����޸ģ�" << endl;
			Tea[i].Input();
			cout << "�޸ĳɹ���" << endl;
		}
		else
        cout << "���޴��ˣ�" << endl;
	}
	
}
void Exp_Manage::Delete()
{
	if (top == 0)
	{
		cout << "��¼Ϊ�գ�" << endl;
		return;
	}
	cout << "��ѡ��ɾ����ʽ��1.����Ų���ɾ�� 2.����������ɾ��" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "�������ţ�" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (num == Tea[i].num)
			{
				cout << "�Ƿ�ȷ��ɾ���� 1.�� 2����" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j - 1];
					cout << "ɾ���ɹ���" << endl;
					top--;
				}break;
				case 2:return;
				default:cout << "�޴��" << endl; break;
				}return;
			}
		}
		cout << "�޴��ˣ�" << endl;
	}; break;
	case 2:
	{
		cout << "������������" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (name == Tea[i].name)
			{
				cout << "�Ƿ�ȷ��ɾ���� 1.�� 2����" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j + 1];
					cout << "ɾ���ɹ���" << endl;
					top--;
				}; break;
				case 2:return;
				default:cout << "�޴��" << endl; break;
				}return;
			}
		}
		cout << "�޴��ˣ�" << endl;
	}; break;
	default:cout << "�޴��" << endl; break;
	}
}
void Exp_Manage::Total()
{
	cout << "1.������ͳ��  2.���Ա�ͳ��" << endl;
	int choice;
	cout << "���������ѡ��" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:cout << "������Ա��Ϊ��" << top << endl; break;
	case 2:
	{
		int a = 0, b = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].sex == "��")a++;
			if (Tea[i].sex == "Ů")b++;
		}
		cout << "��������Ϊ:" << a << endl;
		cout << "Ů������Ϊ:" << b << endl;
	}break;
	default:cout << "�������" << endl; break;
	}
}
void Exp_Manage::Save()
{
	ofstream ofile;
	if (!ofile)
	{
		cout << "��ʧ�ܣ�" << endl;
		return;
	}
	ofile.open("ʵ��Ա.txt");
	cout << "�򿪳ɹ���" << endl;
	for (int i = 0; i < top; i++)
	{
		ofile << Tea[i].num << " " << Tea[i].name << " " << Tea[i].sex << " " << Tea[i].age << " " << Tea[i].library << " " << Tea[i].zw << endl;
	}
	cout << "����ɹ���" << endl;
	ofile.close();
}
void Exp_Manage::Read()
{
	ifstream ifile;
	ifile.open("ʵ��Ա.txt");
	for (int i = 0; i < top; i++)
	{
		ifile >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].library >> Tea[i].zw;
		Tea[i].Output();
	}
	ifile.close();
};
class Tea_Manage
{
	Teacher Tea[N];
	int top;
public:
	Tea_Manage()
	{
        cout << "�������ʦ����:";
		cin >> top;
		if (top != 0)
		{
		cout << "�������ʦ��Ϣ:" << endl;
		cout << "��� ���� �Ա� ����   ϵ��   רҵ  ְ��" << endl;
		for (int i = 0; i < top; i++)
			cin >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].depart >> Tea[i].major >> Tea[i].title;
		}
	}
	void Add();
	void Show();
	void Search();
	void Edit();
	void Delete();
	void Total();
	void Save();
	void Read();
};
void Tea_Manage::Add()
{
	if (top >= N)
	{
		cout << "�û�����" << endl;
		return;
	}
	Teacher t;
	cout << "��������ӵ���Ա����Ϣ��" << endl;
	t.Input();
	for (int i = 0; i < top; i++)
	{
		if (t.GetNum() == Tea[i].GetNum())
			cout << "�ñ�ŵ����Ѵ���" << endl;
		break;
	}
	Tea[top] = t;
	top = top + 1;
	cout << "��ӳɹ���" << endl;
}
void Tea_Manage::Show()
{
	if (top == 0)
	{
		cout << "�����ݣ�" << endl;
		return;
	}
	for (int i = 0; i < top; i++)
		Tea[i].Output();
}
void Tea_Manage::Search()
{
	if (top == 0)
	{
		cout << "��ǰϵͳ��û�д洢��¼��" << endl;
		return;
	}
	int choice;
	cout << "��ѡ���ѯ��ʽ��1.����Ų��� 2.����������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "������Ҫ���ҵı�ţ�" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetNum() == num)
			{
				Tea[i].Output();
				return;
			}
		}
		cout << "���޴��ˣ�" << endl;
	} break;
	case 2:
	{
		cout << "������Ҫ���ҵ�������" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetName() == name)
			{
				Tea[i].Output();
			}
		}
		for (int i = 0; i < top; i++)
			if (Tea[i].GetName() == name)
				return;
		cout << "���޴��ˣ�" << endl;
	} break;
	default:cout << "�޴�ѡ������ԣ�" << endl; break;
	}
}
void Tea_Manage::Edit()
{
	if (top == 0)
	{
		cout << "��ǰϵͳû�д洢��¼��" << endl;
		return;
	}
	int num;
	cout << "������Ҫ���ҵı�ţ�" << endl;
	cin >> num;
	for (int i = 0; i < top; i++)
	{
		if (Tea[i].GetNum() == num)
		{
			cout << "�����λ��ʦ����Ϣ�����޸ģ�" << endl;
			Tea[i].Input();
			cout << "�޸ĳɹ���" << endl;
		}
	}
	cout << "���޴��ˣ�" << endl;
}
void Tea_Manage::Delete()
{
	if (top == 0)
	{
		cout << "��¼Ϊ�գ�" << endl;
		return;
	}
	cout << "��ѡ��ɾ����ʽ��1.����Ų���ɾ�� 2.����������ɾ��" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "�������ţ�" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (num == Tea[i].num)
			{
				cout << "�Ƿ�ȷ��ɾ���� 1.�� 2����" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j - 1];
					cout << "ɾ���ɹ���" << endl;
					top--;
				}break;
				case 2:return;
				default:cout << "�޴��" << endl; break;
				}return;
			}
		}
		cout << "�޴��ˣ�" << endl;
	}; break;
	case 2:
	{
		cout << "������������" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (name == Tea[i].name)
			{
				cout << "�Ƿ�ȷ��ɾ���� 1.�� 2����" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j + 1];
					cout << "ɾ���ɹ���" << endl;
					top--;
				}; break;
				case 2:return;
				default:cout << "�޴��" << endl; break;
				}return;
			}
		}
		cout << "�޴��ˣ�" << endl;
	}; break;
	default:cout << "�޴��" << endl; break;
	}
}
void Tea_Manage::Total()
{
	cout << "1.������ͳ��  2.���Ա�ͳ��  3.��ϵ��ͳ��" << endl;
	int choice;
	cout << "���������ѡ��" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:cout << "��ʦ����Ϊ��" << top << endl; break;
	case 2:
	{
		int a = 0, b = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].sex == "��")a++;
			if (Tea[i].sex == "Ů")b++;
		}
		cout << "�н�ʦ����Ϊ:" << a << endl;
		cout << "Ů��ʦ����Ϊ:" << b << endl;
	}break;
	case 3:
	{
		int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].depart == "���������ϵ")a1++;
			if (Tea[i].depart == "���ӹ���ϵ")a2++;
			if (Tea[i].depart == "����ϵ")a3++;
			if (Tea[i].depart == "����ϵ")a4++;
			if (Tea[i].depart == "�����밲ȫϵ")a5++;
		}
		cout << "���������ϵ��ʦ����Ϊ��" << a1 << endl;
		cout << "���ӹ���ϵ��ʦ����Ϊ��" << a2 << endl;
		cout << "����ϵ��ʦ����Ϊ��" << a3 << endl;
		cout << "����ϵ��ʦ����Ϊ��" << a4 << endl;
		cout << "�����밲ȫϵ��ʦ����Ϊ��" << a5 << endl;
	}break;
	default:cout << "�������" << endl; break;
	}
}
void Tea_Manage::Save()
{
	ofstream ofile("��ʦ.txt");
	if (!ofile)
	{
		cout << "��ʧ�ܣ�" << endl;
		return;
	}
	cout << "�򿪳ɹ���" << endl;
	for (int i = 0; i < top; i++)
	{
		ofile << Tea[i].num << " " << Tea[i].name << " " << Tea[i].sex << " " << Tea[i].age << " " << Tea[i].depart << " " << Tea[i].major << " " << Tea[i].title << endl;
	}
	cout << "д��ɹ���" << endl;
	ofile.close();
}
void Tea_Manage::Read()
{
	string title;
	ifstream ifile;
	ifile.open("��ʦ.txt");
	for (int i = 0; i < top; i++)
	{
		ifile >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].depart >> Tea[i].major >> Tea[i].title;
		Tea[i].Output();
	}
	ifile.close();
};
class Staf_Manage
{
	Staff Tea[N];
	int top;
public:
	Staf_Manage()
	{
        cout << "������������Ա����:";
		cin >> top;
		if (top != 0)
		{
		cout << "������������Ա��Ϣ:" << endl;
		cout << "��� ���� �Ա� ����   ������ò  ְ��" << endl;
		for (int i = 0; i < top; i++)
			cin >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].zzmm >> Tea[i].zc;
		}
	}
	void Add();
	void Show();
	void Search();
	void Edit();
	void Delete();
	void Total();
	void Save();
	void Read();
};
void Staf_Manage::Add()
{
	if (top >= N)
	{
		cout << "�û�����" << endl;
		return;
	}
	Staff t;
	cout << "��������ӵ���Ա����Ϣ��" << endl;
	t.Input();
	for (int i = 0; i < top; i++)
	{
		if (t.GetNum() == Tea[i].GetNum())
			cout << "�ñ�ŵ����Ѵ���" << endl;
		break;
	}
	Tea[top] = t;
	top = top + 1;
	cout << "��ӳɹ���" << endl;
}
void Staf_Manage::Show()
{
	if (top == 0)
	{
		cout << "�����ݣ�" << endl;
		return;
	}
	for (int i = 0; i < top; i++)
		Tea[i].Output();
}
void Staf_Manage::Search()
{
	if (top == 0)
	{
		cout << "��ǰϵͳ��û�д洢��¼��" << endl;
		return;
	}
	int choice;
	cout << "��ѡ���ѯ��ʽ��1.����Ų��� 2.����������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "������Ҫ���ҵı�ţ�" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetNum() == num)
			{
				Tea[i].Output();
				return;
			}
		}
		cout << "���޴��ˣ�" << endl;
	} break;
	case 2:
	{
		cout << "������Ҫ���ҵ�������" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetName() == name)
			{
				Tea[i].Output();
			}
		}
		for (int i = 0; i < top; i++)
			if (Tea[i].GetName() == name)
				return;
		cout << "���޴��ˣ�" << endl;
	} break;
	default:cout << "�޴�ѡ������ԣ�" << endl; break;
	}
}
void Staf_Manage::Edit()
{
	if (top == 0)
	{
		cout << "��ǰϵͳû�д洢��¼��" << endl;
		return;
	}
	int num;
	cout << "������Ҫ���ҵı�ţ�" << endl;
	cin >> num;
	for (int i = 0; i < top; i++)
	{
		if (Tea[i].GetNum() == num)
		{
			cout << "�����λԱ������Ϣ�����޸ģ�" << endl;
			Tea[i].Input();
			cout << "�޸ĳɹ���" << endl;
		}
	}
	cout << "���޴��ˣ�" << endl;
}
void Staf_Manage::Delete()
{
	if (top == 0)
	{
		cout << "��¼Ϊ�գ�" << endl;
		return;
	}
	cout << "��ѡ��ɾ����ʽ��1.����Ų���ɾ�� 2.����������ɾ��" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "�������ţ�" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (num == Tea[i].num)
			{
				cout << "�Ƿ�ȷ��ɾ���� 1.�� 2����" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j - 1];
					cout << "ɾ���ɹ���" << endl;
					top--;
				}break;
				case 2:return;
				default:cout << "�޴��" << endl; break;
				}return;
			}
		}
		cout << "�޴��ˣ�" << endl;
	}; break;
	case 2:
	{
		cout << "������������" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (name == Tea[i].name)
			{
				cout << "�Ƿ�ȷ��ɾ���� 1.�� 2����" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j + 1];
					cout << "ɾ���ɹ���" << endl;
					top--;
				}; break;
				case 2:return;
				default:cout << "�޴��" << endl; break;
				}return;
			}
		}
		cout << "�޴��ˣ�" << endl;
	}; break;
	default:cout << "�޴��" << endl; break;
	}
}
void Staf_Manage::Total()
{
	cout << "1.������ͳ��  2.���Ա�ͳ��" << endl;
	int choice;
	cout << "���������ѡ��" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:cout << "Ա����Ϊ��" << top << endl; break;
	case 2:
	{
		int a = 0, b = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].sex == "��")a++;
			if (Tea[i].sex == "Ů")b++;
		}
		cout << "��������Ϊ:" << a << endl;
		cout << "Ů������Ϊ:" << b << endl;
	}break;
	default:cout << "�������" << endl; break;
	}
}
void Staf_Manage::Save()
{
	ofstream ofile;
	ofile.open("������Ա.txt");
	if (!ofile)
	{
		cout << "��ʧ�ܣ�" << endl;
		return;
	}
	cout << "�򿪳ɹ���" << endl;
	for (int i = 0; i < top; i++)
	{
		ofile << Tea[i].num << " " << Tea[i].name << " " << Tea[i].sex << " " << Tea[i].age << " " << Tea[i].zzmm << " " << Tea[i].zc << endl;
	}
	cout << "д��ɹ���" << endl;
	ofile.close();
}
void Staf_Manage::Read()
{
	ifstream ifile("������Ա.txt");
	for (int i = 0; i < top; i++)
	{
		ifile >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].zzmm >> Tea[i].zc;
		Tea[i].Output();
	}
	ifile.close();
};
class Tea_Staf_Manage
{
	Tea_Sta Tea[N];
	int top;
public:
	Tea_Staf_Manage()
	{
        cout << "�������ʦ��������Ա����:";
		cin >> top;
		if (top != 0)
		{
		cout << "�������ʦ��������Ա��Ϣ:" << endl;
		cout << "��� ���� �Ա� ����   ϵ��   רҵ  ְ��    ������ò    ְ��" << endl;
		for (int i = 0; i < top; i++)
			cin >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].depart >> Tea[i].major >> Tea[i].title >> Tea[i].zzmm >> Tea[i].zc;
		}
	}
	void Add();
	void Show();
	void Search();
	void Edit();
	void Delete();
	void Total();
	void Save();
	void Read();
};
void Tea_Staf_Manage::Add()
{
	if (top >= N)
	{
		cout << "�û�����" << endl;
		return;
	}
	Tea_Sta t;
	cout << "��������ӵ���Ա����Ϣ��" << endl;
	t.Input();
	for (int i = 0; i < top; i++)
	{
		if (t.GetNum() == Tea[i].GetNum())
			cout << "�ñ�ŵ����Ѵ���" << endl;
		break;
	}
	Tea[top] = t;
	top = top + 1;
	cout << "��ӳɹ���" << endl;
}
void Tea_Staf_Manage::Show()
{
	if (top == 0)
	{
		cout << "�����ݣ�" << endl;
		return;
	}
	for (int i = 0; i < top; i++)
		Tea[i].Output();
}
void Tea_Staf_Manage::Search()
{
	if (top == 0)
	{
		cout << "��ǰϵͳ��û�д洢��¼��" << endl;
		return;
	}
	int choice;
	cout << "��ѡ���ѯ��ʽ��1.����Ų��� 2.����������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "������Ҫ���ҵı�ţ�" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetNum() == num)
			{
				Tea[i].Output();
				return;
			}
		}
		cout << "���޴��ˣ�" << endl;
	} break;
	case 2:
	{
		cout << "������Ҫ���ҵ�������" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].GetName() == name)
			{
				Tea[i].Output();
			}
		}
		for (int i = 0; i < top; i++)
			if (Tea[i].GetName() == name)
				return;
		cout << "���޴��ˣ�" << endl;
	} break;
	default:cout << "�޴�ѡ������ԣ�" << endl; break;
	}
}
void Tea_Staf_Manage::Edit()
{
	if (top == 0)
	{
		cout << "��ǰϵͳû�д洢��¼��" << endl;
		return;
	}
	int num;
	cout << "������Ҫ���ҵı�ţ�" << endl;
	cin >> num;
	for (int i = 0; i < top; i++)
	{
		if (Tea[i].GetNum() == num)
		{
			cout << "�����λ��ʦ��Ա������Ϣ�����޸ģ�" << endl;
			Tea[i].Input();
			cout << "�޸ĳɹ���" << endl;
		}
	}
	cout << "���޴��ˣ�" << endl;
}
void Tea_Staf_Manage::Delete()
{
	if (top == 0)
	{
		cout << "��¼Ϊ�գ�" << endl;
		return;
	}
	cout << "��ѡ��ɾ����ʽ��1.����Ų���ɾ�� 2.����������ɾ��" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "�������ţ�" << endl;
		int num;
		cin >> num;
		for (int i = 0; i < top; i++)
		{
			if (num == Tea[i].num)
			{
				cout << "�Ƿ�ȷ��ɾ���� 1.�� 2����" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j - 1];
					cout << "ɾ���ɹ���" << endl;
					top--;
				}break;
				case 2:return;
				default:cout << "�޴��" << endl; break;
				}return;
			}
		}
		cout << "�޴��ˣ�" << endl;
	}; break;
	case 2:
	{
		cout << "������������" << endl;
		string name;
		cin >> name;
		for (int i = 0; i < top; i++)
		{
			if (name == Tea[i].name)
			{
				cout << "�Ƿ�ȷ��ɾ���� 1.�� 2����" << endl;
				int choice;
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					for (int j = i; j < top - 1; j++)
						Tea[j] = Tea[j + 1];
					cout << "ɾ���ɹ���" << endl;
					top--;
				}; break;
				case 2:return;
				default:cout << "�޴��" << endl; break;
				}return;
			}
		}
		cout << "�޴��ˣ�" << endl;
	}; break;
	default:cout << "�޴��" << endl; break;
	}
}
void Tea_Staf_Manage::Total()
{
	cout << "1.������ͳ��  2.���Ա�ͳ��  3.��ϵ��ͳ��" << endl;
	int choice;
	cout << "���������ѡ��" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:cout << "���ڼ�������Ա��Ϊ��" << top << endl; break;
	case 2:
	{
		int a = 0, b = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].sex == "��")a++;
			if (Tea[i].sex == "Ů")b++;
		}
		cout << "��������Ϊ:" << a << endl;
		cout << "Ů������Ϊ:" << b << endl;
	}break;
	case 3:
	{
		int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
		for (int i = 0; i < top; i++)
		{
			if (Tea[i].depart == "���������ϵ")a1++;
			if (Tea[i].depart == "���ӹ���ϵ")a2++;
			if (Tea[i].depart == "����ϵ")a3++;
			if (Tea[i].depart == "����ϵ")a4++;
			if (Tea[i].depart == "�����밲ȫϵ")a5++;
		}
		cout << "���������ϵ��ʦ��������Ա��Ϊ��" << a1 << endl;
		cout << "���ӹ���ϵ��ʦ��������Ա��Ϊ��" << a2 << endl;
		cout << "����ϵ��ʦ��������Ա��Ϊ��" << a3 << endl;
		cout << "����ϵ��ʦ��������Ա��Ϊ��" << a4 << endl;
		cout << "�����밲ȫϵ��ʦ��������Ա��Ϊ��" << a5 << endl;
	}break;
	default:cout << "�������" << endl; break;
	}
}
void Tea_Staf_Manage::Save()
{
	ofstream ofile;
	ofile.open("��ʦ��������Ա.txt");
	if (!ofile)
	{
		cout << "��ʧ�ܣ�" << endl;
		return;
	}
	cout << "�򿪳ɹ���" << endl;
	for (int i = 0; i < top; i++)
	{
		ofile << Tea[i].num << " " << Tea[i].name << " " << Tea[i].sex << " " << Tea[i].age << " " << Tea[i].depart << " " << Tea[i].major << " " << Tea[i].title << " " << Tea[i].zzmm << " " << Tea[i].zc << endl;
	}
	cout << "д��ɹ���" << endl;
	ofile.close();
}
void Tea_Staf_Manage::Read()
{
	ifstream ifile;
	ifile.open("��ʦ��������Ա.txt");
	for (int i = 0; i < top; i++)
	{
		ifile >> Tea[i].num >> Tea[i].name >> Tea[i].sex >> Tea[i].age >> Tea[i].depart >> Tea[i].major >> Tea[i].title >> Tea[i].zzmm >> Tea[i].zc;
		Tea[i].Output();
	}
	ifile.close();
};
void ExpMenu();
void TeaMenu();
void StafMenu();
void Tea_StafMenu();
int main()
{
	cout << "*******************��ӭ�����У��Ա��Ϣ����ϵͳ**************" << endl;
	int choice;
	do {
		cout << "************************************���˵�********************************" << endl;
		cout << "1.ʵ��Ա����  2.��ʦ����  3.������Ա����  4.��ʦ��������Ա����  0.�˳�ϵͳ" << endl;
		cout << "**************************************************************************" << endl;
		cout << "��������Ҫ������ѡ�" << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1: ExpMenu(); break;
		case 2: TeaMenu(); break;
		case 3: StafMenu(); break;
		case 4: Tea_StafMenu(); break;
		case 0:cout << "���˳�ϵͳ!" << endl; break;
		default:cout << "û�д��" << endl; break;
		}
	} while (choice != 0);
	cout << "��ӭ�´�ʹ�ã�" << endl;
	return 0;
}
void ExpMenu()
{
	Exp_Manage t;
	int choice;
	do {
	cout << "******************************ʵ��Ա����******************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "1.���  2.��ʾ  3.����  4.�޸�  5.ɾ��  6.ͳ��  7.����  8.��ȡ  0.�˳�" << endl;
	cout << "**********************************************************************" << endl;
	cout << "��������Ҫ������ѡ�" << endl;
	cin >> choice;
	switch (choice)
		{
		case 1:t.Add(); break;
		case 2:t.Show(); break;
		case 3:t.Search(); break;
		case 4:t.Edit(); break;
		case 5:t.Delete(); break;
		case 6:t.Total(); break;
		case 7:t.Save(); break;
		case 8:t.Read(); break;
		case 0:cout << "�˳��ɹ�" << endl; break;
		default:cout << "û�д��" << endl; break;
		}
	} while (choice != 0);
}
void TeaMenu()
{
	Tea_Manage t;
	int choice;
	do {
	cout << "*********************************��ʦ����*****************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "1.���  2.��ʾ  3.����  4.�޸�  5.ɾ��  6.ͳ��  7.����  8.��ȡ  0.�˳�" << endl;
	cout << "**********************************************************************" << endl;
	cout << "��������Ҫ������ѡ�" << endl;
	cin >> choice;
	switch (choice)
		{
		case 1:t.Add(); break;
		case 2:t.Show(); break;
		case 3:t.Search(); break;
		case 4:t.Edit(); break;
		case 5:t.Delete(); break;
		case 6:t.Total(); break;
		case 7:t.Save(); break;
		case 8:t.Read(); break;
		case 0:cout << "�˳��ɹ�" << endl; break;
		default:cout << "û�д��" << endl; break;
		}
	} while (choice != 0);
}
void StafMenu()
{
	Staf_Manage t;
	int choice;
	do {
	cout << "******************************������Ա����****************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "1.���  2.��ʾ  3.����  4.�޸�  5.ɾ��  6.ͳ��  7.����  8.��ȡ  0.�˳�" << endl;
	cout << "**********************************************************************" << endl;
	cout << "��������Ҫ������ѡ�" << endl;
	cin >> choice;
    switch (choice)
		{
		case 1:t.Add(); break;
		case 2:t.Show(); break;
		case 3:t.Search(); break;
		case 4:t.Edit(); break;
		case 5:t.Delete(); break;
		case 6:t.Total(); break;
		case 7:t.Save(); break;
		case 8:t.Read(); break;
		case 0:cout << "�˳��ɹ�" << endl; break;
		default:cout << "û�д��" << endl; break;
		}
	} while (choice != 0);
}
void Tea_StafMenu()
{
	Tea_Staf_Manage t;
	int choice;
	do {
	cout << "****************************��ʦ��������Ա����************************" << endl;
	cout << "**********************************************************************" << endl;
	cout << "1.���  2.��ʾ  3.����  4.�޸�  5.ɾ��  6.ͳ��  7.����  8.��ȡ  0.�˳�" << endl;
	cout << "**********************************************************************" << endl;
	cout << "��������Ҫ������ѡ�" << endl;
	cin >> choice;
    switch (choice)
		{
		case 1:t.Add(); break;
		case 2:t.Show(); break;
		case 3:t.Search(); break;
		case 4:t.Edit(); break;
		case 5:t.Delete(); break;
		case 6:t.Total(); break;
		case 7:t.Save(); break;
		case 8:t.Read(); break;
		case 0:cout << "�˳��ɹ�" << endl; break;
		default:cout << "û�д��" << endl; break;
		}
	} while (choice != 0);
}