#include <morse.h>
Morse morse(13);
int input=0;
char morse[26][4]={
  {'*','-'},//A
  {'-','*','*','*'},//B
  {'-','*','-','*'},//C
  {'-','*','*'},//D
  {'*'},//E
  {'*','*','-','*'},//F 
  {'-','-','*'},//G
  {'*','*','*','*'},//H 
  {'*','*'},//I
  {'*','-','-','-'},//J 
  {'-','*','-'},//K
  {'*','-','*','*'},//L
  {'-','-'},//M
  {'-','*'},//N
  {'-','-','-'},//O
  {'*','-','-','*'},//P
  {'-','-','*','-'},//Q
  {'*','-','*'},//R
  {'*','*','*'} ,//S
  {'-'},//T
  {'*','*','-'},//U
  {'*','*','*','-'},//V   
  {'*','-','-'},//W
  {'-','*','*','-'},//X
  {'-','*','-','-'},//Y
  {'-','-','*','*'} ,//Z
};
void setup() {
  // put your setup code here, to run once:
  Serial begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 
 String str="";/
 String morse="";
 int i, t, temp=0;
intn=0;//
 while(Serial. available()>0){
temp=1;//
str+=char(Serial.read());//
 delay(2);
n++
}
 if(temp){

 for(i=0; i<n;i++)
{
 for (t=0; t< 4; t++)
{

 if(str[i] >= 97&& str[i]<= 122)
 morse+= char(MORSE[ int(str[]-97)1[t]);
}
}

 morse+=' ';
}
Serial.println(morse);
delay(2)；
}
