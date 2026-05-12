// LED connected to pin 13
int ledPin = 13;

void setup()
{
    // Configure LED pin as output
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    // -------- SLOW SPEED --------
    // 5 sec ON, 5 sec OFF
    // Repeat 2 times

    for(int i = 0; i < 2; i++)
    {
        digitalWrite(ledPin, HIGH);
        delay(5000);

        digitalWrite(ledPin, LOW);
        delay(5000);
    }

    // -------- MEDIUM SPEED --------
    // 2.5 sec ON, 2.5 sec OFF
    // Repeat 2 times

    for(int i = 0; i < 2; i++)
    {
        digitalWrite(ledPin, HIGH);
        delay(2500);

        digitalWrite(ledPin, LOW);
        delay(2500);
    }

    // -------- FAST SPEED --------
    // 1 sec ON, 1 sec OFF
    // Repeat 2 times

    for(int i = 0; i < 2; i++)
    {
        digitalWrite(ledPin, HIGH);
        delay(1000);

        digitalWrite(ledPin, LOW);
        delay(1000);
    }
}