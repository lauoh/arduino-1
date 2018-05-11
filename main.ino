//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

// the setup function runs once when you press reset or power the board
void setup()
{
    pinMode (2 , INPUT_PULLUP);
    pinMode (4 , INPUT_PULLUP);
    pinMode (6 , INPUT_PULLUP);
    pinMode (8, INPUT_PULLUP);

    pinMode (3 , OUTPUT);
    pinMode (5 , OUTPUT);
    pinMode (7 , OUTPUT);
    pinMode (9 , OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
    if (digitalRead(2) ==LOW)
    {
        digitalWrite(3,LOW);
    }
    else
    {
        digitalWrite(3, HIGH);
    }
    if (digitalRead (4) ==LOW)
    {
        digitalWrite(5,LOW);
    }
    else
    {
        digitalWrite(5, HIGH);
    }
    if (digitalRead (6) ==LOW)
    {
        digitalWrite(7,LOW);
    }
    else
    {
        digitalWrite(7, HIGH);
    }
    if (digitalRead (8) ==LOW)
    {
        digitalWrite(9,LOW);
    }
    else
    {
        digitalWrite(9, HIGH);
    }
 }
