#include<iostream>
using namespace std;
#include<string>;
#define Max 1000
//创建菜单
void showmeau()
{
	cout << "1.添加联系人" << endl;
	cout << "2.删除联系人" << endl; 
	cout << "3.查找联系人" << endl; 
	cout << "4.修改联系人" << endl;
	cout << "5.清空联系人" << endl;
	cout << "6.退出通讯录" << endl;
}
struct person
{
	string m_Name;
	int m_sex;
	int m_Age;
	string m_Phone;
	string m_Addr; 

};
struct Addressbooks
{
	struct person personArray[Max];
	int m_size;
};
int main()
{
	 showmeau(); 
	 int select = 0;
	 cin >> select;
	 switch (select)
	 {
	 case 1:
		 break;
	 case 2:
		 break;
	 case 3:
		 break;
	 case 4:
		 break;
	 case 5:
		 break;
	 case 6:
		 break;
	 case 0:
		 break;
		  
	 }

	system("pause");
	return 0;

}