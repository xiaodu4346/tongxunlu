#include<iostream>
using namespace std;
#include<string>;
#define Max 1000
//�����˵�
void showmeau()
{

	cout << "1.�����ϵ��" << endl;
	cout << "1.ɾ����ϵ��" << endl; 
	cout << "1.������ϵ��" << endl; 
	cout << "1.�޸���ϵ��" << endl;
	cout << "1.�����ϵ��" << endl;
	cout << "1.�˳�ͨѶ¼" << endl;
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