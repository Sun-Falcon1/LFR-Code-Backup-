//speed calculation 
void reading() {
  // 3 major problems 
  // - b&w sensor can't differentiate 
  // - height adjustment issue, track is bad 
  // - digital sensor. threshold value is set 2.5 volt 
  sensor = 0;
  // code as treating the sensor as analog sensor 
  for (byte i = 0; i < 5; i++) {
    s[i] = analogRead(i);
    (s[i] < th) ? s[i] = 0 : s[i] = 1;
    sensor += s[i] * base[i]; // Fixed sensor accumulation using base array
  }
}