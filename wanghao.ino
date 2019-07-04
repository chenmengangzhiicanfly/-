#include<reg52.h>
unsigned char flag,bai,shi,ge;
#define uint unsigned int
#define uchar unsigned char
uint a;
sbit wela=P2^7;                                     //位选  
sbit dula=P2^6;                                     //段选
unsigned char code table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,
         0x7d,0x07,0x7f,0x6f};              //定义不同数字在数码管的显示

void delay(uint z)                                   //延时函数(1ms)
{
  uint x,y;
  for(x=z;x>0;x--)
    for(y=110;y>0;y--);
}

void display(uchar shu)                               //数码管显示数字函数
{
    dula=1;
    P0=table[shu];                              //显示对应数字
    dula=0;
    P0=0xff;
    wela=1;
    P0=0xfe;                                   //在最后一个数码管显示数字
    wela=0;
    delay(1);
}

void main()
{

  TMOD=0x20;                                   //定时器工作方式，选择了定时器1，工作方式2 八位初值自动重装的8位定时器 
TH1=0xE6;                                     //定义计时间隔时长
  TL1=0xE6;
  TR1=1;
  SM0=0;
  SM1=1;
  REN=1;
  EA=1;                                         //中断总开关
  ES=1;                                         //串口开关
  while(1)
  {
    if(flag==1)                                 //判断是否接收新数据
    {
      ES=0;                                 //关闭开关记录下数据
      flag=0;
      shu=a;
      ES=1;                                 //打开开关
    }
    display(shu);                                //显示数字
  }
}

void ser() interrupt 4                                  //串口接收数据函数
{
  RI=0;
  a=SBUF;                                       //接收数据
  flag=1;
}
