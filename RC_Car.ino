#define m1pin1 4
#define m1pin2 5
#define m2pin1 6
#define m2pin2 7
char reading;
void setup()
{//motor1
  pinMode(m1pin1,OUTPUT);
  pinMode(m1pin2,OUTPUT);
  //motor2
  pinMode(m2pin1,OUTPUT);
  pinMode(m2pin2,OUTPUT);

   Serial.begin(9600);
}
void loop()
{
  if (Serial.available()){reading=Serial.read();}
  Serial.println(reading);
  
  switch(reading){
    case 'F':
    Move(1,0,1,0);
    break; 
    case 'B':
    Move(0,1,0,1);
    break;
    case 'R':  
    Move(1,0,0,1);
    break;
    case 'L':  
    Move(0,1,1,0);
    break;
    default:
    Move(1,1,1,1);
    break;
    }
 }
  
void Move(int p1,int p2,int p3,int p4){
 digitalWrite(m1pin1,p1);
 digitalWrite(m1pin2,p2);
 digitalWrite(m2pin1,p3);
 digitalWrite(m2pin2,p4);
 }


