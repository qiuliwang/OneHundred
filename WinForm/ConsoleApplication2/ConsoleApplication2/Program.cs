using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;


namespace ConsoleApplication2
{
    class Program
    {

        static void Main(string[] args)
        {
            System.Console.WriteLine("*** 所有的问题都可以通过y(yes)和n(no)来回答。");
            Thread.Sleep(1000);

            string str;
            System.Console.WriteLine("*** 你好，请问你是陶自玲嘛？");
            str = Console.ReadLine();
            if (str == "n" || str == "no")
            {
                Thread.Sleep(1000);
                System.Console.WriteLine("*** 不好意思啊，找错人了(⌒▽⌒)"); ;
                Thread.Sleep(4000);

            }
            else if (str == "y" || str == "yes")
            {
                Thread.Sleep(1000);

                System.Console.WriteLine("*** 你好啊，有一个叫王秋里的人想和你说几句话，可以吗？");
                str = Console.ReadLine();
                if (str == "n" || str == "no")
                {
                    Thread.Sleep(1000);

                    System.Console.WriteLine("*** 你确定吗？他在等你哦。");
                    str = Console.ReadLine();
                    if (str == "y" || str == "yes")
                    {
                        System.Console.WriteLine("*** 求你了...他真的非常想和你讲话...");
                        Thread.Sleep(1000);

                        System.Console.WriteLine("*** 给他一个机会嘛?");
                        str = Console.ReadLine();
                        if (str == "n" || str == "no")
                        {
                            Thread.Sleep(1000);

                            System.Console.WriteLine("*** 好吧。打扰了。再见。");
                            Thread.Sleep(2000);

                            return;
                        }
                    }
                }
                //System.Console.WriteLine ("*** here" );;
                //Thread.Sleep(5);
                Thread.Sleep(1000);

                System.Console.WriteLine("*** 好的！我现在就去找他！");

                Thread.Sleep(1000);
                System.Console.WriteLine("*");
                Thread.Sleep(1000);
                System.Console.WriteLine("**");
                Thread.Sleep(1000);
                System.Console.WriteLine("***");
                Thread.Sleep(1000);
                System.Console.WriteLine("你好啊桃子~");
                Thread.Sleep(4000);
                System.Console.WriteLine("100天可以很短，因为从开始到现在，感觉好像做了一个长梦。");
                Thread.Sleep(5000);
                System.Console.WriteLine("100天也可以很长，因为看100天之前的自己，好像完全是在看另外一个人。");
                Thread.Sleep(6000);
                System.Console.WriteLine("你说，100天的时候，我们像平常一样过就好。但是我怎么可能做到呢？\n从来都没有哪个100天能让我这么开心。");
                Thread.Sleep(6000);
                System.Console.WriteLine("当然，我也希望在将来的某一天，我们在回顾这一天的时候\n会觉得这一天只不过是我们漫长经历中平凡而又幸福的一天。");
                Thread.Sleep(6000);
                System.Console.WriteLine("期待第二个100天，以及更多的100天。");
                Thread.Sleep(4000);
                System.Console.WriteLine("我要说的就是这些...");

                Thread.Sleep(3000);
                System.Console.WriteLine("***");
                Thread.Sleep(1000);
                System.Console.WriteLine("**");
                Thread.Sleep(1000);
                System.Console.WriteLine("*");

                System.Console.WriteLine("*** 啊，他居然走了。他个直男。他居然没有说\"我爱你\"。");
                Thread.Sleep(4000);
                System.Console.WriteLine("*** 但是我知道他啊，不是他不想说，是他太开心了，高兴过度了不知道该说啥。"); ;
                Thread.Sleep(4000);
                System.Console.WriteLine("*** 他肯定是非常爱你的了。放心吧。"); ;
                Thread.Sleep(4000);
                System.Console.WriteLine("*** 他试了C#、Java，结果他发现，自己已经笨到连Java都不会了。"); ;
                Thread.Sleep(4000);
                System.Console.WriteLine("*** 他差点把键盘砸了。所以他只能用最简单的C++来构建我了。"); ;
                Thread.Sleep(4000);
                System.Console.WriteLine("*** 所以，你觉得我怎么样？喜欢我吗？");
                str = Console.ReadLine();
                Thread.Sleep(1000);
                if (str == "n" || str == "no")
                {
                    System.Console.WriteLine("*** 啊好可惜。不过这不能怪我，都怪他把我做这么丑。这绝对是他最丑的代码。"); ;
                }
                else if (str == "y" || str == "yes")
                {
                    System.Console.WriteLine("*** 哈哈哈哈，我很开心~"); ;
                }
                Thread.Sleep(4000);
                System.Console.WriteLine("*** 啊，我不应该浪费你的时间。"); ;
                Thread.Sleep(4000);
                System.Console.WriteLine("*** 你有什么想和他说的吗？");
                str = Console.ReadLine();
                if (str == "n" || str == "no")
                {
                    Thread.Sleep(1000);
                    System.Console.WriteLine("*** 尴尬。。。"); ;
                    Thread.Sleep(4000);
                    System.Console.WriteLine("*** 不过你可以去 https://github.com/wangqiuli0102/OneHundred 看看。"); ;
                    Thread.Sleep(4000);
                    System.Console.WriteLine("*** 他留了一些东西在上面。"); ;
                }
                else if (str == "y" || str == "yes")
                {
                    Thread.Sleep(4000);
                    System.Console.WriteLine("*** 哈哈哈，你可以打给他或者见一下他。不过这不是我的任务咯。"); ; ;
                    Thread.Sleep(4000);
                    System.Console.WriteLine("*** 我的任务到此为止，你可以去 https://github.com/wangqiuli0102/OneHundred 看看。"); ;
                    Thread.Sleep(4000);
                    System.Console.WriteLine("*** 他留了一些东西在上面。记得看之前和他说一下哦"); ;
                }
                Thread.Sleep(4000);
                System.Console.WriteLine("*** 很高兴认识你。拜拜。"); ;
                Thread.Sleep(10000);
            }

            return;
        }
    }
}
