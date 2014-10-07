#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
using namespace std;

struct student {
	private:
		int group;
		string name;
	public:
		student (string _name, int _group):name(_name), group(_group)
			{
			cout << "Hello, " << name << " from the group ¹" << group << endl;
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
			cout << "The " << sub_name << " exam, your examiner is " << prep << endl;
			}
		string prep_ans[5] = {"very bad", "bad", "ok", "good", "great"};
		int bilet()
		{
			srand(time(NULL));
			int res = rand() % 5;
			mark += res + 1;
			cout << "Your answer is " << prep_ans[res];
			cout << ". Now your grade is " << mark << endl;
		}
		int ans_ques()
		{
			int res2 = rand() % 5;
			mark += res2 - 2;
			cout << "You answered additional questions " << prep_ans[res2] << endl;
			mark > 2 ? cout << "So your exam mark is " << mark : cout << "You didn't pass this exam!";
		}
};

int main()
{
	student s("Bob", 343);
	exam e("Maths", "Sakbaev", 0);
	e.bilet();
	e.ans_ques();
	return 0;	
}
