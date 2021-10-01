#include<stdio.h>
void butler(void);//函数原型，又叫函数声明，它是一种声明形式，告诉编译器我要使用该函数啦（这函数是我自定义的， 
                  //函数原型还指明了函数的属性
				  //此处void表示函数不带返回值 
int main(void)//此处void表示函数不带参数 
{
	printf("I will summon the butler function!\n");
	butler();//在main()中调用butler（）函数 
	         //何时执行butler（）函数取决于它在main（）函数中被调用的位置；此处开始执行butler(）函数 
	printf("Yes,bring me some tea and writable DVDs.\n");
	
	return 0;
}
void butler(void)//函数定义开始 
                 //不论将该函数定义在该程序文件中的任何位置，都不会改变程序的执行顺序 
{
	printf("you rang,sir?\n");//看得出来我定义的butler（）就是一个套皮printf（） 
	
}
