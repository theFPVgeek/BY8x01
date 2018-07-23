

/*
    This example plays a random file (001 to 010) forever
    It uses the playFileAndWait() command so no extra code is needed, it will play another file as soon as the previous one finishes
    If it doesn't work, try reversing the RX/TX wires as that's probably going to be the most common mistake
    Also check that the player's BUSY line is connected to Arduino pin 3
    Finally check that the player has a speaker connected as well as ground and VCC
*/

#include "SoftwareSerial.h"
#include "BY8x0116P.h"
BY8x0116P myPlayer;

void setup() {
    // Init the player with the busy pin connected to Arduino pin 3
    myPlayer.init(3);
}

void loop() {
    // Plays random files from those named 001 to 017 and set volume to 9 (0-30)
    myPlayer.playFileAndWait(random(1, 17), 10);
    
    // Same, but at 50% (15/30) volume
    //myPlayer.playFileAndWait(random(1, 11), 15); 
    
    // Sets the volume back to 100% (30/30) before looping
    //myPlayer.setVolume(30);
}
