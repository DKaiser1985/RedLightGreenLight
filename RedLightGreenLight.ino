bool redOn = true;

Timer nextFlash;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  if (nextFlash.isExpired() && redOn == true){
    setColor(RED);
    nextFlash.set(3000);
    redOn = false;
  }
  if(nextFlash.isExpired() && redOn == false){
    setColor(GREEN);
    nextFlash.set(3000);
    redOn = true;
  }
  
}
