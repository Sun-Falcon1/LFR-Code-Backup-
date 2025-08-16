//motor driving 
//sensor reading 

int s[5], th = 512;
int base[] = {1, 2, 4, 8, 16};
int sensor = 0; // Added missing sensor variable declaration

int lms = 5, lmf = 6, lmb = 7, rmf = 8, rmb = 9, rms = 10; // Changed rms from 0 to 10 to avoid analog pin conflict

void setup() {
  // put your setup code here, to run once:
  //motorOrient(250, 250); 
  // left right orientation // 250 - volt / speed 
  // max speed value = 255 
  pinMode(lmf, OUTPUT); // Added pin initialization
  pinMode(lmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(rmb, OUTPUT);
  pinMode(lms, OUTPUT);
  pinMode(rms, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  reading();
  if (sensor == B11100) motorOrient(200, 200); // Fixed function name from motor to motorOrient
}
