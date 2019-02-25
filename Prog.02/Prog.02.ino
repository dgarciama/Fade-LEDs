/**********************************************************************************
**                                                                               **
**                                                      TÍTOL: Fade LEDS Prog.02 **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 25/02/2019   **
**********************************************************************************/

//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  analogWrite(led0, 0);    
  analogWrite(led1, 0);     
  analogWrite(led2, 0);    
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 0);     
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);   
  analogWrite(led1, 0);    
  analogWrite(led2, 0);   
  analogWrite(led3, 0);    
  analogWrite(led4, 0);    
  analogWrite(led5, 42);    
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    
  analogWrite(led1, 0);    
  analogWrite(led2, 0);   
  analogWrite(led3, 0);    
  analogWrite(led4, 42);    
  analogWrite(led5, 84);    
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    
  analogWrite(led1, 0);    
  analogWrite(led2, 0);   
  analogWrite(led3, 42);    
  analogWrite(led4, 84);    
  analogWrite(led5, 126);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 0);    
  analogWrite(led1, 0);    
  analogWrite(led2, 42);   
  analogWrite(led3, 84);    
  analogWrite(led4, 126);    
  analogWrite(led5, 168);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
  analogWrite(led0, 0);    
  analogWrite(led1, 42);    
  analogWrite(led2, 84);   
  analogWrite(led3, 126);    
  analogWrite(led4, 168);    
  analogWrite(led5, 210);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
  analogWrite(led0, 42);    
  analogWrite(led1, 84);    
  analogWrite(led2, 126);   
  analogWrite(led3, 168);    
  analogWrite(led4, 210);    
  analogWrite(led5, 254);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
  analogWrite(led0, 84);    
  analogWrite(led1, 126);    
  analogWrite(led2, 168);   
  analogWrite(led3, 210);    
  analogWrite(led4, 254);    
  analogWrite(led5, 254);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
  analogWrite(led0, 126);    
  analogWrite(led1, 168);    
  analogWrite(led2, 210);   
  analogWrite(led3, 254);    
  analogWrite(led4, 254);    
  analogWrite(led5, 254);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
  analogWrite(led0, 168);    
  analogWrite(led1, 210);    
  analogWrite(led2, 254);   
  analogWrite(led3, 254);    
  analogWrite(led4, 254);    
  analogWrite(led5, 254);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
  analogWrite(led0, 210);    
  analogWrite(led1, 254);    
  analogWrite(led2, 254);   
  analogWrite(led3, 254);    
  analogWrite(led4, 254);    
  analogWrite(led5, 254);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
  analogWrite(led0, 254);    
  analogWrite(led1, 254);    
  analogWrite(led2, 254);   
  analogWrite(led3, 254);    
  analogWrite(led4, 254);    
  analogWrite(led5, 254);   
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
}

//********** Funcions *************************************************************
