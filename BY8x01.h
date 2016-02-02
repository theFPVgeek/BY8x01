/*
  BY8x0116P.h - Library for the BY8x01-6P module(s)
  First Release Created by /u/afreeland (Forked from Critters/MP3FLASH16P)
  Updated naming by r0ndL
  Released into the public domain
*/

#ifndef BY8x0116P_h
#define BY8x0116P_h
#include "Arduino.h"

class BY8x0116P
{
    public:
        BY8x0116P();
        void init(int PIN_BUSY, int VOLUME = 30);
        void playFile(int FILE_NUMBER, int VOLUME = -1);
        void playFileAndWait(int FILE_NUMBER, int VOLUME = -1);
        void setVolume(int VOLUME);
        void volumeUp();
        void volumeDown();
        void stopPlay();
        bool isBusy();
        uint8_t checksumCalc(uint8_t *instruction_params);
        uint8_t * buildParams(uint8_t *instruction_params, int len);
        void makeRequest(uint8_t * params, int len);
    private:
        int _PIN_BUSY;
        uint8_t _VOLUME;
        bool isPlaying;
};

#endif
