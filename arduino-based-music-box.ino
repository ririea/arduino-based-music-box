const int sensor[8] = {A0, A1, A2, A3, A4, A5, A6, A7};
const int speaker = 10;

int inputData;

void setup() {
  Serial.begin(9600);
  pinMode(sensor[8], INPUT);

  for (int x = 0; x < 8; x++) {
    pinMode(sensor[i], INPUT);
  }

  pinMode(speaker, OUTPUT);
}

void loop() {

  int inputData = analogRead(sensor[i]);

  if (inputData >= ) {
    tone(speaker, 100);
    Serial.println(yes note);
  }
  else if () {
    tone(speaker, )
  }
  else if () {
    tone(speaker, )
  }
  else if () {
    tone(speaker, )
  }
  else if () {
    tone(speaker, )
  }
  else if () {
    tone(speaker, )
  }
  else if () {
    tone(speaker, )
  }
  else if () {
    tone(speaker, )
  } 
  else {
    noTone(speaker);
    Serial.println(no note);
  }

}

