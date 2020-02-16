const int trigPin = 11;
const int echoPin = 10;
const int speakerOut = 8;


float duration = 0;
int distance = 0;

int freqs[] = {523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988};
int notes[12];

void setup() 
{
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(speakerOut, OUTPUT);
  Serial.begin(9600);
  for(int i = 0; i < 12; i++)
  {
   notes[i] = 1000000.0 / freqs[i];
  }
}

void playNote(int distance)
{  
  if (distance >= 10 && distance < 46)
  {
    int i = (distance - 10) / 3;
    tone(speakerOut, notes[i]);
  }
}

void loop() 
{  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  
  // Calculating the distance
  distance = duration*0.034/2;

  playNote(distance);
}
