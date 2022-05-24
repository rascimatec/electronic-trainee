// C++ code

int button = 3; 

void setup(){
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println(digitalRead(button));
  delay(1000);
}