//generating a user defined function 
void motorOrient(int a, int b) {
  if (a > 0) {
    digitalWrite(lmf, 1);
    digitalWrite(lmb, 0);
    analogWrite(lms, a); // Added speed control
  }
  else if (a < 0) { // Fixed condition from a>0 to a<0 for reverse
    digitalWrite(lmf, 0); // for reverse function 
    digitalWrite(lmb, 1); // if we set both on same voltage, be 1, motor will run. because of the same voltage 
    analogWrite(lms, -a); // Added speed control for reverse
  }
  else {
    digitalWrite(lmf, 0); 
    digitalWrite(lmb, 0);
    analogWrite(lms, 0); // Added speed control
  }
  // right motor's direction 
  if (b > 0) {
    digitalWrite(rmf, 1); // Fixed to use rmf instead of lmf
    digitalWrite(rmb, 0); // Fixed to use rmb instead of lmb
    analogWrite(rms, b); // Added speed control
  }
  else if (b < 0) { // Fixed condition from b>0 to b<0 for reverse
    digitalWrite(rmf, 0); // for reverse function 
    digitalWrite(rmb, 1); // if we set both on same voltage, be 1, motor will run. because of the same voltage 
    analogWrite(rms, -b); // Added speed control for reverse
  }
  else {
    digitalWrite(rmf, 0); // Fixed to use rmf instead of lmf
    digitalWrite(rmb, 0); // Fixed to use rmb instead of lmb
    analogWrite(rms, 0); // Added speed control
  }
  // direction calculation either forward / backward : digital / analog write 
}
