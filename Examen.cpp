// Программа не проверяет знания по какому-л. предмету;
// выставленные оценки никоим образом не отображают реальных знаний пользователя.


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
			cout << "Здравствуйте, " << name << " из группы " << group << endl;
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
			cout << "Экзамен по предмету " << sub_name << ", Ваш экзаменатор - " << prep << endl;
			}
		string prep_ans[5] = {"очень плохо", "плохо", "нормально", "хорошо", "отлично"};
		int bilet()
		{
			srand(time(NULL));
			int res = rand() % 5;
			mark += res + 1;
			cout << "По билету Вы ответили " << prep_ans[res];
			cout << ". Сейчас Ваша оценка: " << mark << endl;
		}
		int ans_ques()
		{
			int res2 = rand() % 5;
			mark += res2 - 2;
			cout << "На доп. вопросы Вы ответили " << prep_ans[res2] << endl;
			mark > 2 ? cout << "Ваша оценка за экзамен: " << mark : cout << "Пересдача!";
		}
};

int main()
{
	setlocale(LC_ALL,"rus");
	student s("Вася", 343);
	exam e("Мат. ан", "Сакбаев В.Ж.", 0);
	e.bilet();
	e.ans_ques();
	return 0;	
}
