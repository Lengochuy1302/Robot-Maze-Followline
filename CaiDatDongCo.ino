void setupMotor() {
  pinMode(leftmotor1, OUTPUT);
  pinMode(leftmotor2, OUTPUT);
  pinMode(rightmotor1, OUTPUT);
  pinMode(rightmotor2, OUTPUT);
}

// ĐỘNG CƠ TRÁI CONTROLS
void Motor_Left_Stop()
{
  digitalWrite(leftmotor1, LOW);
  digitalWrite(leftmotor2, LOW);
}
void Motor_Left_Forward(int _speed)
{
  _speed=constrain(_speed, Min_Speed, Max_Speed);
  analogWrite(leftmotor2,255 - _speed);
  digitalWrite(leftmotor1, HIGH);
}
void Motor_Left_Backward(int _speed)
{
  _speed=constrain(_speed, Min_Speed, Max_Speed);
  analogWrite(leftmotor2, _speed);
  digitalWrite(leftmotor1, LOW);
}
// ĐỘNG CƠ PHẢI CONTROLS

void Motor_Right_Stop()
{
  digitalWrite(rightmotor1, LOW);
  digitalWrite(rightmotor2, LOW);
}

void Motor_Right_Forward(int _speed)
{
  _speed=constrain(_speed, Min_Speed, Max_Speed);
  analogWrite(rightmotor1,255 - _speed);
  digitalWrite(rightmotor2, HIGH);

}
void Motor_Right_Backward(int _speed)
{
  _speed=constrain(_speed, Min_Speed, Max_Speed);
  analogWrite(rightmotor1,_speed);
  digitalWrite(rightmotor2, LOW);
}
