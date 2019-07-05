#include <morse.h>
Morse morse(13);
int input=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    input=Serial.read();
    switch(input){
      case 'A':
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
      
      case 'B':
        morse.dash();
        morse.dot();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
      
       case 'C':
        morse.dash();
        morse.dot();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
      
      
      case 'D':
        morse.dash();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
      
      case 'E':
        morse.dot();
        morse.c_space();
        break;
      
       case 'F':
        morse.dot();
        morse.dot();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
      
       case 'G':
        morse.dash();
        morse.dash();
        morse.dot();
        
        morse.c_space();
        break;
      
       case 'H':
        morse.dot();
        morse.dot();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
      
      case 'I':
        morse.dot();
        morse.dot();
      
        morse.c_space();
        break;
      
       case 'J':
        morse.dot();
        morse.dash();
        morse.dash();
        morse.dash();
        morse.c_space();
        break;
      
       case 'K':
        morse.dash();
        morse.dot();
       
        morse.dash();
        morse.c_space();
        break;
      
       case 'L':
        morse.dot();
        morse.dash();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
      
       case 'M':
        morse.dash();
        morse.dash();
        
        morse.c_space();
        break;
      
       case 'N':
        morse.dash();
        morse.dot();
        
        morse.c_space();
        break;
      
       case 'O':
        morse.dash();
        morse.dash();
        morse.dash();
       
        morse.c_space();
        break;
      
       case 'P':
        morse.dot();
        morse.dash();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
      case 'Q':
        morse.dash();
        morse.dash();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
       case 'R':
        morse.dot();
        morse.dash();
        morse.dot();
        morse.c_space();
        break;
      
       case 'S':
        morse.dot();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
      
       case 'T':
        morse.dash();
      
       
        morse.c_space();
        break;
      
       case 'U':
        morse.dot();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
      
      case 'V':
        morse.dot();
        morse.dot();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
      
       case 'W':
        morse.dot();
        morse.dash();
        morse.dash();
        morse.c_space();
        break;
      
       case 'X':
        morse.dash();
        morse.dot();
        morse.dot();
        morse.dash();
        morse.c_space();
        break;
      
       case 'Y':
        morse.dash();
        morse.dot();
        morse.dash();
        morse.dash();
        morse.c_space();
        break;
      
       case 'Z':
        morse.dash();
        morse.dash();
        morse.dot();
        morse.dot();
        morse.c_space();
        break;
      
     
     
    }
  }

}
