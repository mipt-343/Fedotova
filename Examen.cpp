// ��������� �� ��������� ������ �� ������-�. ��������;
// ������������ ������ ������ ������� �� ���������� �������� ������ ������������.


#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
#include <clocale>
using namespace std;

struct student {
	private:
		int group;
		string name;
	public:
		student (string _name, int _group):name(_name), group(_group)
			{
			cout << "������������, " << name << " �� ������ " << group << endl;
			}
};

struct exam {
	private:
		string sub_name;
		string prep;
		int mark;
	public:
		exam (string _sub_name, string _prep, int _mark):sub_name(_sub_name), prep(_prep), mark(_mark) 
			{
			cout << "������� �� �������� " << sub_name << ", ��� ����������� - " << prep << endl;
			}
		string prep_ans[5] = {"����� �����", "�����", "���������", "������", "�������"};
		int bilet()
		{
			srand(time(NULL));
			int res = rand() % 5;
			mark += res + 1;
			cout << "�� ������ �� �������� " << prep_ans[res];
			cout << ". ������ ���� ������: " << mark << endl;
		}
		int ans_ques()
		{
			int res2 = rand() % 5;
			mark += res2 - 2;
			cout << "�� ���. ������� �� �������� " << prep_ans[res2] << endl;
			mark > 2 ? cout << "���� ������ �� �������: " << mark : cout << "���������!";
		}
};

int main()
{
	setlocale(LC_ALL,"rus");
	student s("����", 343);
	exam e("���. ��", "������� �.�.", 0);
	e.bilet();
	e.ans_ques();
	return 0;	
}
