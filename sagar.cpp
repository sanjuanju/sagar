
void setup () {
pinMode (Passive_buzzer,OUTPUT) ;
pinMode (Active_buzzer,OUTPUT) ;
pinMode (built_in_led,OUTPUT) ;
}

void loop () {
digitalWrite(built_in_led,LOW) ; //Turn on the built in led
digitalWrite(Active_buzzer,HIGH) ; //Turn on active buzzer
delay (1000);
 
digitalWrite(built_in_led,HIGH) ; //Turn off the built in led
digitalWrite(Active_buzzer,LOW) ; //Turn off active buzzer
delay (1000); 

tone(Passive_buzzer, 523) ; //DO note 523 Hz
delay (1000); 
tone(Passive_buzzer, 587) ; //RE note ...
delay (1000); 
tone(Passive_buzzer, 659) ; //MI note ...
delay (1000); 
tone(Passive_buzzer, 783) ; //FA note ...
delay (1000); 
tone(Passive_buzzer, 880) ; //SOL note ...
delay (1000); 
tone(Passive_buzzer, 987) ; //LA note ...
delay (1000); 
tone(Passive_buzzer, 1046) ; // SI note ...
delay (1000); 
noTone(Passive_buzzer) ; //Turn off the pin attached to the tone()
}
CATEGORIES