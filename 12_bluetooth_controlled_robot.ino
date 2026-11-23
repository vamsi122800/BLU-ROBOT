/*bluetooth pin connections 
TX-->RX of arduino
RX--> TX of arduino*/

int right_motor_1=2;        // Connect right side motor 1st wire to 2 pin of UNO board
int right_motor_2=3;        // Connect right side motor 2nd wire to 3 pin of UNO board
int left_motor_1=4;         // Connect left side motor 1st wire to 4 pin of UNO board
int left_motor_2=5;         /* Connect left side motor 2nd wire to 5 pin of UNO board*/

void setup() 
{
  pinMode(right_motor_1, OUTPUT);
  pinMode(right_motor_2, OUTPUT);
  pinMode(left_motor_1, OUTPUT);
  pinMode(left_motor_2, OUTPUT);
  Serial.begin(9600);
}

void rest()
{
  digitalWrite(right_motor_1, LOW);
  digitalWrite(right_motor_2,LOW);
  digitalWrite(left_motor_1, LOW);
  digitalWrite(left_motor_2, LOW); 
}

void loop() 
{
  if(Serial.available()>0) 
  { 
    char command = Serial.read();
      if(command == 'f')// move forward
      {
        digitalWrite(right_motor_1,HIGH);
        digitalWrite(right_motor_2, LOW);
        digitalWrite(left_motor_1, HIGH);
        digitalWrite(left_motor_2, LOW); 
        delay(500); 
      }
      if(command == 'b')
      {
        digitalWrite(right_motor_1,LOW);
        digitalWrite(right_motor_2,HIGH);
        digitalWrite(left_motor_1,LOW);
        digitalWrite(left_motor_2,HIGH);   
        delay(500);
      }
      if(command == 'r')
      {
        digitalWrite(right_motor_1,LOW);
        digitalWrite(right_motor_2,HIGH);
        digitalWrite(left_motor_1,HIGH);
        digitalWrite(left_motor_2,LOW);   
        delay(500);
      }
      if(command == 'l')
      {
        digitalWrite(right_motor_1,HIGH);
        digitalWrite(right_motor_2,LOW);
        digitalWrite(left_motor_1,LOW);
        digitalWrite(left_motor_2,HIGH);   
        delay(500);
      }
      rest();
  }
}
