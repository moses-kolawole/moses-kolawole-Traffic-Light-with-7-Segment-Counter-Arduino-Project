// led light used
int redpin = 4;
int yellowpin = 5;
int greenpin = 6;
int delay_time = 500;

//7 segment display setup
int Apin = 13;
int Bpin = 12;
int Cpin = 11;
int Dpin = 10;
int Epin = 9;
int Fpin = 8;
int Gpin = 7;
int total_pin_used = 10;

int seg_pin = 7;

int one[] = {0, 1, 1, 0, 0, 0, 0};
int two[] = {1, 1, 0, 1, 1, 0, 1};
int three[] = {1, 1, 1, 1, 0, 0, 1};
int four[] = {0, 1, 1, 0, 0, 1, 1};
int five[] = {1, 0, 1, 1, 0, 1, 1};
int six[] = {1, 0, 1, 1, 1, 1, 1};
int seven[] = {1, 1, 1, 0, 0, 0, 0};
int eight[] = {1, 1, 1, 1, 1, 1, 1};
int nine[] = {1, 1, 1, 0, 0, 1, 1};
int zero[] = {1, 1, 1, 1, 1, 1, 0};


void setup() {
  // put your setup code here, to run once:
for(int i = 0; i < total_pin_used; i++){
  pinMode(i+4, OUTPUT);
}

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redpin, HIGH);

//zero display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, zero[i]);
}
  delay(delay_time);

// one display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, one[i]);
}
  delay(delay_time);

//two display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, two[i]);
}
  delay(delay_time);

//three display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, three[i]);
}
  delay(delay_time);

// four diaplay
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, four[i]);
}
  delay(delay_time);

// five display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, five[i]);
}
  delay(delay_time);

// six display
  for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, six[i]);
}
  delay(delay_time);

// seven dislay
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, seven[i]);
}
  delay(delay_time);

// eight dispaly
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, eight[i]);
}
  delay(delay_time);

// nine display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, nine[i]);
}
  delay(delay_time);


digitalWrite(redpin, LOW);




// yellow led pin
digitalWrite(yellowpin, HIGH);

//zero display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, zero[i]);
}
  delay(delay_time);

// one display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, one[i]);
}
  delay(delay_time);

//two display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, two[i]);
}
  delay(delay_time);

//three display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, three[i]);
}
  delay(delay_time);

// four diaplay
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, four[i]);
}
  delay(delay_time);

// five display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, five[i]);
}
  delay(delay_time);

// six display
  for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, six[i]);
}
  delay(delay_time);

// seven dislay
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, seven[i]);
}
  delay(delay_time);

// eight dispaly
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, eight[i]);
}
  delay(delay_time);

// nine display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, nine[i]);
}
  delay(delay_time);

digitalWrite(yellowpin, LOW);



// greeen led light 
digitalWrite(greenpin, HIGH);

//zero display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, zero[i]);
}
  delay(delay_time);

// one display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, one[i]);
}
  delay(delay_time);

//two display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, two[i]);
}
  delay(delay_time);

//three display
for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, three[i]);
}
  delay(delay_time);

// four diaplay
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, four[i]);
}
  delay(delay_time);

// five display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, five[i]);
}
  delay(delay_time);

// six display
  for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, six[i]);
}
  delay(delay_time);

// seven dislay
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, seven[i]);
}
  delay(delay_time);

// eight dispaly
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, eight[i]);
}
  delay(delay_time);

// nine display
 for(int i = 0; i < seg_pin; i++){
  digitalWrite(13 - i, nine[i]);
}
  delay(delay_time);

digitalWrite(greenpin, LOW);

}
