const int buttonPin = 8;
const int _buttonPin = 7;
const int __buttonPin = 2;

boolean buttonState = 0;        
boolean lastButtonState = 1;
   
boolean _buttonState = 0;        
boolean _lastButtonState = 1;   

boolean __buttonState = 0;        
boolean __lastButtonState = 1;   

void setup() {
  // put your setup code here, to run once:
 
   pinMode(buttonPin, INPUT_PULLUP);
   pinMode(_buttonPin, INPUT_PULLUP);
   pinMode(__buttonPin, INPUT_PULLUP);
  
   Serial.begin(9600);
  
}

void loop() {
  
  // put your main code here, to run repeatedly:

    buttonState = digitalRead(buttonPin);
    if(buttonState != lastButtonState)
     { 
            if (buttonState == LOW)
            {
               Serial.println("1");
               delay(100);
            }
            
            if(buttonState == HIGH)
            {
              Serial.println("-1");
               delay(100);
            }
     }
      lastButtonState = buttonState;

      //--------------------------------------------------------------------
    _buttonState = digitalRead(_buttonPin);
      if(_buttonState != _lastButtonState)
     {
        if (_buttonState == LOW)
        {
           Serial.println("2");
           delay(100);
        }
        
        else if(_buttonState == HIGH)
        {
          Serial.println("-2");
           delay(100);
        }
     }
      _lastButtonState = _buttonState;
      
//---------------------------------------------------------------------------------
      __buttonState = digitalRead(__buttonPin);
      if(__buttonState != __lastButtonState)
     {
        if (__buttonState == LOW)
        {
           Serial.println("3");
           delay(100);
        }
        
        else if (__buttonState == HIGH)
        {
          Serial.println("-3");
           delay(100);
        }
     }
      __lastButtonState = __buttonState;
    
}
