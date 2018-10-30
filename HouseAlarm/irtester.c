#include <stdio.h>
#include <wiringPi.h>
#include <time.h>
int main(int argc, char *argv[])
{
  time_t time1;
  time_t time2;
  int i;
  wiringPiSetup () ;
  pinMode(1,OUTPUT);
  pinMode(0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
pullUpDnControl(3, PUD_UP) ; 


  while(1) {

int x = digitalRead(3);
    while(x==1){
digitalWrite(1,HIGH);
digitalWrite(2,LOW);
digitalWrite(4,LOW);


}

   digitalWrite(4,LOW);
    time1 = time(NULL);
    time t1 = time1;
    x=1;
    while(time1-t1<=1){
digitalWrite(1,LOW);
delay(200);
digitalWrite(1,HIGH);
}
/*alarm armed*/
while(time1-t1>=10){
    digitalWrite(2,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(4,LOW);
 time2 = time(NULL);
 time t2 = time2;
   /* printf("Waiting for reset\n");*/
    if(x==0){
   break;

}
   /*printf("Waiting for event\n");*/
if(digitalRead(0) == 1&&time2-t2<=10){
if(x==0){
break;
}


}
else{
 while(time2-t2>=10)
{
ifttt("https://maker.ifttt.com/trigger/alarm_triggered/with/key/56-YpOKO17vOh-");
digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
delay(2000);
digitalWrite(1,LOW);
digitalWrite(2,LOW);
if(x==0){
break;
}

}
   /* printf("Alarm\n");*/
break;
}
}
  
x=1;
}


  /*NOTREACHED*/
  return 0 ;
}
