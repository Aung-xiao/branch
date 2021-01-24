#include <iostream>
#include <stdio.h>
using namespace std;
int hw1(void);
int hw2(void);
int hw3(void);
int hw4(void);
int main()
{
	A:
	int a;
	cout<<"输入1,2,3或4查看作业，输入任意其他键退出\n"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
		cout<<"作业1：乘法表\n"<<endl; 
		hw1() ;
		cout<<"\n"<<endl;
		goto A;                        //利用goto 语句循环这个main（）函数； 
		break;
		case 2:
		cout<<"作业2：数的进制转换\n"<<endl;
		hw2();
		goto A;
		break;	
		case 3:
		cout<<"作业3：数组\n"<<endl;
		hw3();
		goto A;
		break;
		case 4:
		cout<<"作业4：hello,world\n"<<endl;
		hw4();
		goto A;
		break;
		default :
		cout<<"再见！"<<endl;
		break;
	}
	return 0;
}
  
//======================================= 
int hw1(void)
{
	int  i,j;
	for(i=15;i<95;i+=10)
	{
	for(j=15;j<=i;j+=10)
	{
	  printf("%d*%d=%d",j,i,j*i);
	  printf("\t");

	}
	printf("\n");

	}


	

	return 0;
}
//======================================== 
int hw2(void)
{	
	int x,y,sex,num;
	A:
	printf("请任意输入0-255的数（退出请输入0）\n");
	int b=scanf("%d",&x);
	int c=getchar();                                     
	if(b==0)                                             
	{
	printf("输入有误\n");
	goto A;
	}
	if(x>255)
	{
	printf("输入有误\n");
	goto A;
	}
	while(x!=0){
	int transfer(int x);
	sex=transfer(x)/10000000;
	if(transfer(x)>10000000)
			{
			num=transfer(x)-10000000;
			}

		else {
			num=transfer(x);
		}
	switch(sex)
	{
		case(0):
			printf("性别：男；学号：%07d\n",num);
			break;
		case(1):
			printf("性别：女；学号：%07d\n",num);
			break;
      	}
	goto A;
	}

	

return 0;
}


int transfer(int x)                              //十进制转二进制 
{
	int  p=1,y=0,yushu;
	while(1)
	{
	 yushu=x%2;
	 x/=2;
	 y+=yushu*p;
	 p*=10;
	 if(x<2)
	 {
	  y+=x*p;
	  break;
	 }
	}
	return y;
}
//====================================== 
int hw3(void)
{

	cout<<"请输入10个数字"<<endl;
	int num[10];
	int *p,i;
	p=num;
	for(i=0;i<10;i++)
	{	cin>>num[i];
	}
	for(p=num+9;p>=num;p--)
	{
		cout<<*p<<' ';
	}
	cout<<"\n";
	return 0;
}
//========================================
int hw4(void)
{
	cout<<"hello,world!!!!!!!\n"<<endl;
	return 0;
}
