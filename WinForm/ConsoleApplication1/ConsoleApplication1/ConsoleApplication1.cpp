#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	cout << "*** ���е����ⶼ����ͨ��y(yes)��n(no)���ش�" << endl;
	Sleep(1000);

	string str;
	cout << "*** ��ã����������������" << endl << ">>";
	cin >> str;
	if (str == "n" || str == "no")
	{
		Sleep(1000);
		cout << "*** ������˼�����Ҵ�����(�Ш���)" << endl;
		Sleep(4000);

	}
	else if (str == "y" || str == "yes")
	{
		Sleep(1000);

		cout << "*** ��ð�����һ������������������˵���仰��������" << endl << ">>";
		cin >> str;
		int i = 0;
		if (str == "n" || str == "no")
		{
			Sleep(1000);

			cout << "*** ��ȷ�������ڵ���Ŷ��" << endl << ">>";
			cin >> str;
			if (str == "y" || str == "yes")
			{
				cout << "*** ������...����ķǳ�����㽲��..." << endl;
				Sleep(1000);

				cout << "*** ����һ��������?" << endl << ">>";
				cin >> str;
				if (str == "n" || str == "no")
				{
					Sleep(1000);

					cout << "*** �ðɡ������ˡ��ټ���" << endl;
					Sleep(2000);

					return 0;
				}
			}
		}
		//cout << "*** here" << endl;
		//sleep(5);
		Sleep(1000);

		cout << "*** �õģ������ھ�ȥ������" << endl;

		Sleep(1000);
		cout << "*" << endl;
		Sleep(1000);
		cout << "**" << endl;
		Sleep(1000);
		cout << "***" << endl;
		Sleep(1000);
		cout << "��ð�����~" << endl;
		Sleep(4000);
		cout << "100����Ժ̣ܶ���Ϊ�ӿ�ʼ�����ڣ��о���������һ�����Ρ�" << endl;
		Sleep(5000);
		cout << "100��Ҳ���Ժܳ�����Ϊ��100��֮ǰ���Լ���������ȫ���ڿ�����һ���ˡ�" << endl;
		Sleep(6000);
		cout << "��˵��100���ʱ��������ƽ��һ�����ͺá���������ô���������أ�\n������û���ĸ�100����������ô���ġ�" << endl;
		Sleep(6000);
		cout << "��Ȼ����Ҳϣ���ڽ�����ĳһ�죬�����ڻع���һ���ʱ��\n�������һ��ֻ��������������������ƽ�������Ҹ���һ�졣" << endl;
		Sleep(6000);
		cout << "�ڴ��ڶ���100�죬�Լ������100�졣" << endl;
		Sleep(4000);
		cout << "��Ҫ˵�ľ�����Щ..." << endl;

		Sleep(3000);
		cout << "***" << endl;
		Sleep(1000);
		cout << "**" << endl;
		Sleep(1000);
		cout << "*" << endl;

		cout << "*** ��������Ȼ���ˡ�����ֱ�С�����Ȼû��˵\"�Ұ���\"��" << endl;
		Sleep(4000);
		cout << "*** ������֪������������������˵������̫�����ˣ����˹����˲�֪����˵ɶ��" << endl;
		Sleep(4000);
		cout << "*** ���϶��Ƿǳ�������ˡ����İɡ�" << endl;
		Sleep(4000);
		cout << "*** ������C#��Java����������֣��Լ��Ѿ�������Java�������ˡ�" << endl;
		Sleep(4000);
		cout << "*** �����Ѽ������ˡ�������ֻ������򵥵�C++���������ˡ�" << endl;
		Sleep(4000);
		cout << "*** ���ԣ����������ô����ϲ������" << endl << ">>";
		cin >> str;
		Sleep(1000);
		if (str == "n" || str == "no")
		{
			cout << "*** ���ÿ�ϧ�������ⲻ�ܹ��ң���������������ô��������������Ĵ��롣" << endl;
		}
		else if (str == "y" || str == "yes")
		{
			cout << "*** �����������Һܿ���~" << endl;
		}
		Sleep(4000);
		cout << "*** �����Ҳ�Ӧ���˷����ʱ�䡣" << endl;
		Sleep(4000);
		cout << "*** ����ʲô�����˵����" << endl << ">>";
		cin >> str;
		if (str == "n" || str == "no")
		{
			Sleep(1000);
			cout << "*** ���Ρ�����" << endl;
			Sleep(4000);
			cout << "*** ���������ȥ https://github.com/wangqiuli0102/OneHundred ������" << endl;
			Sleep(4000);
			cout << "*** ������һЩ���������档" << endl;
		}
		else if (str == "y" || str == "yes")
		{
			Sleep(4000); 
			cout << "*** ������������Դ�������߼�һ�����������ⲻ���ҵ����񿩡�" << endl;;
			Sleep(4000); 
			cout << "*** �ҵ����񵽴�Ϊֹ�������ȥ https://github.com/wangqiuli0102/OneHundred ������" << endl;
			Sleep(4000);
			cout << "*** ������һЩ���������档" << endl;
		}
		Sleep(4000);
		cout << "*** �ܸ�����ʶ�㡣�ݰݡ�" << endl;
		Sleep(10000);
	}

	return 0;
}