//�������� ��������� ��� �������� ������� ������� �� ���������� � ������ -
//���(���, �������, ����, ���, ������������).�������� ���������� � ����, �����
//������� ���������� ���������.�������� �������, ������� �� ��������� ��� -
//���� ���������� :
// 
//2.���������� ��� ������ �������� �������� n �����.
#include <iostream>

using namespace std;

const int m = 40;
struct student          // ���������� ��������� student
{
	int course;
	int age;
	char name[m];
	char sex[m];
	int pp;
};

student myread();           //  ���� �������� ����� ���������  
void myprint(student);     //  ����� �������� ����� ��������� 

void main()
{
	const int n = 3;
	student group[n];
	for (int i = 0; i < n; i++)  // ���������� ������� ���������
		group[i] = myread();
	for (int i = 0; i < n; i++)
		myprint(group[i]);
	cout << "Enter value of course :" << endl;
	int CourseValue;
	cin >> CourseValue;
	int i = n - 1;
	int min = 1000;
	do
	{
		if (group[i].course == CourseValue)
		{
			if (group[i].age < min) min = i;
		}
		i--;
	} while (i >= 0);
	myprint(group[min]);
}

student myread()      //  ���� �������� ����� ���������
{
	student stud;
	cout << " FIO = "<<endl;
	cin.getline(stud.name, m);       // ���� ��� 
	cout << " age = "<<endl;
	cin >> stud.age;  
	cin.get();
	cout << " course = "<<endl;
	cin >> stud.course;
	cin.get();
	cout << " sex = "<<endl;
	cin.getline(stud.sex,m);
	cout << " perfomance points = "<<endl;
	cin >> stud.pp;
	cin.get();
	return stud;
}
void myprint(student stud) //  ����� �������� ����� ���������
{
	cout << " FIO = " << stud.name << endl;
	cout << " age = " << stud.age << endl;
	cout << " course = " << stud.course << endl;
	cout << " sex = " << stud.sex << endl;
	cout << " perfomance points = " << stud.pp << endl;
}

