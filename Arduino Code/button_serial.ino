/* Code from Manu Arturo Channel's video
 *  https://www.youtube.com/channel/UCiKvfkp0KeUI-GYLIk3szrQ/videos
 *  i modified it for two buttons to print 1 and 2 on the serial so that NodeJS program can read
 */

#define button_pin 7    
#define button_pin2 6

// variables will change:
int button_press_count = 0;
int button_press_count2 = 0;
int button_state = 0;
int button_state2 = 0;
int prev_button_state = 0;
int prev_button_state2 = 0;



void setup() {
  // put your setup code here, to run once:
  delay(100);
  Serial.begin(9600);
  pinMode (button_pin2, INPUT_PULLUP);
  pinMode (button_pin, INPUT_PULLUP); //Set digi pin 7 as pull up button
  pinMode (13, OUTPUT);

  Serial.println("Button Count:");
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state = digitalRead(button_pin);
  if (button_state != prev_button_state) {
    if (button_state == HIGH) {
      digitalWrite(13, LOW);
    } else { //button press
      digitalWrite(13, HIGH);
      button_press_count = 1;
      Serial.println(button_press_count); //print the count
    }
    
    delay(50);
  }
  prev_button_state = button_state;
  // 2nd
  button_state2 = digitalRead(button_pin2);
  if (button_state2 != prev_button_state2) {
    if (button_state2 == HIGH) {
      digitalWrite(13, LOW);
    } else { //button press
      digitalWrite(13, HIGH);
      button_press_count2 = 2;
      Serial.println(button_press_count2); //print the count
    }
    
    delay(50);
  }
  prev_button_state2 = button_state2;
  
}
