#include <iostream>
using namespace std;
#include "workerManager.h"

int main()
{
	//实例化管理者对象
	WorkerManager wm;

	int choice = 0; //储存用户选择

	while (true)
	{
		//调用展示菜单成员函数
		wm.Show_Menu();

		cout << "请输入你的选择  " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: //退出系统
			break;
		case 1: //增加职工
			break;
		case 2: //显示职工
			break;
		case 3: //删除职工
			break;
		case 4: //修改职工
			break;
		case 5://查找职工
			break; 
		case 6://排序职工
			break; 
		case 7: //清空文档
			break;
		default:
			system("cls");//清屏
			break;

		}
	}

	

	system("pause");

	return 0;
}