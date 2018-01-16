#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	cout << "*** 所有的问题都可以通过y(yes)和n(no)来回答。" << endl;
	Sleep(1000);

	string str;
	cout << "*** 你好，请问你是陶自玲嘛？" << endl << ">>";
	cin >> str;
	if (str == "n" || str == "no")
	{
		Sleep(1000);
		cout << "*** 不好意思啊，找错人了(⌒▽⌒)" << endl;
		Sleep(4000);

	}
	else if (str == "y" || str == "yes")
	{
		Sleep(1000);

		cout << "*** 你好啊，有一个叫王秋里的人想和你说几句话，可以吗？" << endl << ">>";
		cin >> str;
		int i = 0;
		if (str == "n" || str == "no")
		{
			Sleep(1000);

			cout << "*** 你确定吗？他在等你哦。" << endl << ">>";
			cin >> str;
			if (str == "y" || str == "yes")
			{
				cout << "*** 求你了...他真的非常想和你讲话..." << endl;
				Sleep(1000);

				cout << "*** 给他一个机会嘛?" << endl << ">>";
				cin >> str;
				if (str == "n" || str == "no")
				{
					Sleep(1000);

					cout << "*** 好吧。打扰了。再见。" << endl;
					Sleep(2000);

					return 0;
				}
			}
		}
		//cout << "*** here" << endl;
		//sleep(5);
		Sleep(1000);

		cout << "*** 好的！我现在就去找他！" << endl;

		Sleep(1000);
		cout << "*" << endl;
		Sleep(1000);
		cout << "**" << endl;
		Sleep(1000);
		cout << "***" << endl;
		Sleep(1000);
		cout << "你好啊桃子~" << endl;
		Sleep(4000);
		cout << "100天可以很短，因为从开始到现在，感觉好像做了一个长梦。" << endl;
		Sleep(5000);
		cout << "100天也可以很长，因为看100天之前的自己，好像完全是在看另外一个人。" << endl;
		Sleep(6000);
		cout << "你说，100天的时候，我们像平常一样过就好。但是我怎么可能做到呢？\n从来都没有哪个100天能让我这么开心。" << endl;
		Sleep(6000);
		cout << "当然，我也希望在将来的某一天，我们在回顾这一天的时候\n会觉得这一天只不过是我们漫长经历中平凡而又幸福的一天。" << endl;
		Sleep(6000);
		cout << "期待第二个100天，以及更多的100天。" << endl;
		Sleep(4000);
		cout << "我要说的就是这些..." << endl;

		Sleep(3000);
		cout << "***" << endl;
		Sleep(1000);
		cout << "**" << endl;
		Sleep(1000);
		cout << "*" << endl;

		cout << "*** 啊，他居然走了。他个直男。他居然没有说\"我爱你\"。" << endl;
		Sleep(4000);
		cout << "*** 但是我知道他啊，不是他不想说，是他太开心了，高兴过度了不知道该说啥。" << endl;
		Sleep(4000);
		cout << "*** 他肯定是非常爱你的了。放心吧。" << endl;
		Sleep(4000);
		cout << "*** 他试了C#、Java，结果他发现，自己已经笨到连Java都不会了。" << endl;
		Sleep(4000);
		cout << "*** 他差点把键盘砸了。所以他只能用最简单的C++来构建我了。" << endl;
		Sleep(4000);
		cout << "*** 所以，你觉得我怎么样？喜欢我吗？" << endl << ">>";
		cin >> str;
		Sleep(1000);
		if (str == "n" || str == "no")
		{
			cout << "*** 啊好可惜。不过这不能怪我，都怪他把我做这么丑。这绝对是他最丑的代码。" << endl;
		}
		else if (str == "y" || str == "yes")
		{
			cout << "*** 哈哈哈哈，我很开心~" << endl;
		}
		Sleep(4000);
		cout << "*** 啊，我不应该浪费你的时间。" << endl;
		Sleep(4000);
		cout << "*** 你有什么想和他说的吗？" << endl << ">>";
		cin >> str;
		if (str == "n" || str == "no")
		{
			Sleep(1000);
			cout << "*** 尴尬。。。" << endl;
			Sleep(4000);
			cout << "*** 不过你可以去 https://github.com/wangqiuli0102/OneHundred 看看。" << endl;
			Sleep(4000);
			cout << "*** 他留了一些东西在上面。" << endl;
		}
		else if (str == "y" || str == "yes")
		{
			Sleep(4000); 
			cout << "*** 哈哈哈，你可以打给他或者见一下他。不过这不是我的任务咯。" << endl;;
			Sleep(4000); 
			cout << "*** 我的任务到此为止，你可以去 https://github.com/wangqiuli0102/OneHundred 看看。" << endl;
			Sleep(4000);
			cout << "*** 他留了一些东西在上面。" << endl;
		}
		Sleep(4000);
		cout << "*** 很高兴认识你。拜拜。" << endl;
		Sleep(10000);
	}

	return 0;
}