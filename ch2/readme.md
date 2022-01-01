#ch2  
赋值  
```
int steinway;
int baldwin;
int yamaha;
yamaha = baldwin = steinway = 88;
```
命名空间相关  
1.using namespace std 放在函数定义之前，让所有函数都能够使用名称空间里面的所有元素。  
2.放在函数定义里面，让该函数能够使用命名空间中的所有元素  
3.在特定函数中使用using std::cout这样的指令  
4.完全不使用编译指令using,使用std::cout  
  
总结  
声明语句  赋值语句  消息语句  函数调用  函数原型 返回语句

复习题  
1.C++ 中程序的模块叫什么  
函数  
2.预处理编译指令 #include<iostream> 是做什么用的  
包含头文件iostream 可以使用其内部的函数如cout,cin等  
3.下面的语句是做什么用的 using namespace std;  
标准命名空间
4.什么语句可以打印“Hello world”然后开始新的一行  
cout<<"Hello world"<<endl;  
5.创建名为cheess的整数变量  
int cheeses;  
6.将值32赋值给变量cheeses  
cheeses = 32;  
7.将键盘的数读入到cheeses中
cin >> cheeeses；  
8.打印we have x varieties of cheeses 其中x为变量cheeses的值  
cout << "we have "<<x <<"varieties of cheeses"";  
9. int froop(double t) 接受的参数为浮点型 返回的为int型  
   void rattle(int n)   
   int pure(void)  
10. 不需要关键字return  无返回值  
11. cout报错 未声明  #include<iostream> using namespace std;























