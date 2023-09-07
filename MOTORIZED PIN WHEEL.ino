int switchstate = 0;
const int switch_1 = 2;
const int motorPin = 9;

void setup() {
  // put your setup code here, to run once:

  pinMode(switch_1, INPUT);
  pinMode(motorPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  switchstate = digitalRead(switch_1);



  if(switchstate == HIGH){
    digitalWrite(motorPin, HIGH);
  }else{
    digitalWrite(motorPin, LOW);
  }

}
