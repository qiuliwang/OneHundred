#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main()
{
    cout << "*** all questions can be answered by yes or no (y or n)" << endl;
    cout << "*** 你好，请问你是陶自玲嘛？" << endl;
    string str;
    cin >> str;
    if(str == "n" || str == "no")
    {
        cout << "*** 不好意思啊，找错人了(⌒▽⌒)" << endl;
    }
    else if(str == "y" || str == "yes")
    {
        cout << "*** 你好啊，有一个叫王秋里的人想和你说几句话，可以吗？" << endl;
        cin >> str;
        int i = 0;
        if(str == "n" || str == "no")
        {
            cout << "are you sure? please he is waiting for you" << endl;
            cin >> str;
            if(str == "y" || str == "yes")
            {
                cout << "please, he wants to talk to you very very much..." << endl;
                cout << "can you give him a chance?" << endl;
                cin >> str;
                if(str == "n" || str == "no")
                {
                    cout << "sorry for disturbing. Bye bye" << endl;
                    return 0;
                }
            }
        }
        //cout << "*** here" << endl;
        //sleep(5);
        cout << "OK, I will go and get him." << endl;
        sleep(1);
        cout << "*" << endl;
        sleep(1);
        cout << "**" << endl;
        sleep(1);
        cout << "***" << endl;
        cout << "hello I am here" << endl;
        cout << "100天可以很短，因为从开始到现在，感觉好想做了一个长梦。100天也可以很长，因为看100天之前的自己，好像完全是在看另外一个人。你说100天的时候，我们像平常一样过就好。但是我怎么可能做到呢？从来都没有哪个100天能值让我这么开心。当然，我也希望在将来的某一天，我们在回顾这一天的时候，会觉得这一天只不过是我们漫长经历中平凡而又幸福的一天。期待第二个100天，以及更多的100天。" << endl;
        sleep(1);
            
        cout << "he is gone. so strange. he should had said more words." << endl;
        sleep(1);
        
        cout << "but I know him. He is so happy that he cannot talk, like overdose."<< endl;
        cout << "he trid C#, Java, but he is so stupid that he could not finish project like Java" << endl;
        cout << "so he could only use C++, the basic tech to build me" << endl;
        cout << "do you like me ?"<< endl;
        cin >> str;
        if(str == "n" || str == "no")
        {
            cout << "pitty...not my fault. all blame him for making so ugly" << endl;
        }
        else if(str == "y" || str == "yes")
        {
            cout << "I am so happy"<<endl;
        }
        cout << "I should not waste your time." << endl;
        cout << "Do you have anything to tell him?" << endl;
        cin >> str;
        if(str == "n" || str == "no")
        {
            cout << "embarrassing. However, you can go to www. for more details" << endl;
        }
        else if(str == "y" || str == "yes")
        {
            cout << "Maybe you should call him or meet him ~" << endl;;
            cout << "please go to www.site for more detials." << endl;
        }
        cout << "very nice to meet you."<< endl;
        return 0;
    }

    return 0;
}