#include <Servo.h>
Servo lidservo;
Servo armservo; 


int switchpin = A1;

int action = 1;

int pos = 0;

void setup() {
pinMode(switchpin,INPUT);
lidservo.attach(6);
armservo.attach(5);



// Servo Default Starting Position

armservo.write(55);
lidservo.write(0);
}

void loop(){
   if (digitalRead(switchpin) == HIGH){
    if (action > 7) {
    action = 1;
  }  
    if (action == 1) {
    action1();
    }
    else if (action == 2) {
    action2();
    }
    else if (action == 3) {
    action3();
    }
    else if (action == 4) {
    action4();
    }
    else if (action == 5) {
    action5();
    }
    else if (action == 6) {
    action6();
    }
    else if (action == 7) {
    action7();
    }
   action+=1;
  }
}

void action1() {
  lidservo.write(50);
  delay(1000);
  armservo.write(170);
  delay(500); 
  armservo.write(55);
  delay(1000);
  lidservo.write(0);
  delay(1000);
}

void action2() {
  lidservo.write(50);
  delay(100);
  armservo.write(170);
  delay(250);
  armservo.write(55);
  delay(100);
  lidservo.write(0);
}

void action3() {
    for(pos = 0; pos < 20; pos +=1)
  {
    lidservo.write(pos);
    delay(50);
  }
  armservo.write(17);
  delay(250);
  armservo.write(55);
  delay(100);
  lidservo.write(0);
}

void action4() {
  delay(250);
  lidservo.write(50);
  delay(100);
  armservo.write(170);
  delay(2500);
for(pos = 170; pos > 90; pos -=1)
  {
    armservo.write(pos);
    delay(50);
  }
  lidservo.write(0);
  armservo.write(55);
}

void action5() {
  lidservo.write(50);
  delay(500);
  lidservo.write(0);
  delay(500);
  lidservo.write(50);
  delay(500);
  lidservo.write(0);
  delay(500);
  lidservo.write(50);
  delay(500);
  lidservo.write(0);
  delay(2500);
  lidservo.write(50);
  delay(100);
  armservo.write(170);
  delay(250);
  armservo.write(55);
  delay(100);
  lidservo.write(0);
}

void action6() {
  lidservo.write(50);
  delay(100);
  armservo.write(155);
  delay(250);
  armservo.write(55);
  delay(100);
  lidservo.write(0);
  delay(250);
  lidservo.write(50);
  delay(100);
  armservo.write(155);
  delay(250);
  armservo.write(55);
  delay(100);
  lidservo.write(0);
  delay(250);
  lidservo.write(50);
  delay(100);
  armservo.write(155);
  delay(250);
  armservo.write(55);
  delay(100);
  lidservo.write(0);
  delay(250);  
  lidservo.write(50);
  delay(100);
  armservo.write(170);
  delay(250);
  armservo.write(55);
  delay(100);
  lidservo.write(0);
}

void action7() {
    for(pos = 0; pos < 20; pos +=2)
  {
    lidservo.write(pos);
    delay(50);
  }
for(pos = 55; pos < 145; pos +=2)
  {
    armservo.write(pos);
    delay(100);
  }
  armservo.write(177);
for(pos = 177; pos > 50; pos -=2)
  {
    armservo.write(pos);
    delay(100);
  }
for(pos = 20; pos > 0; pos -=2)
  {
    lidservo.write(pos);
    delay(50);
  }
  lidservo.write(0);
 }