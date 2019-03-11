
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

bool A;                     

bool B;

int t;

int ctr=0;

void setup()

{

pinMode(6,INPUT_PULLUP);


pinMode(7,INPUT_PULLUP);



lcd.begin(16,2);

lcd.setCursor(0,0);

lcd.print("UP DOWN Counter");

lcd.setCursor(0,1);

lcd.print("Visitor Counter");

delay(2000);


}


void loop() 

{

A = digitalRead(6);                      

B= digitalRead(7);

                                

if(A==LOW && B==HIGH)

{

ctr=ctr+1;                                      

delay(900);

}

else{ctr=ctr;

}


if(A==HIGH && B==LOW)

{

ctr=ctr-1;                                       

delay(900);

}

else

{

  ctr=ctr;

}

lcd.setCursor(0,0);

lcd.print("Counter : ");

lcd.setCursor(10,0);

lcd.print(ctr);

delay(100);

lcd.clear();

}

  
  
  
