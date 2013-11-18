//
//  String.h
//  SwivelAutotune
//
//  Created by Paul Francis Cunninghame Mathews on 18/11/13.
//
//
/**
    Represents a single string. Implements juce::AudioIODeviceCallback, so in order to do its calculations it must be
    added as a callback to the current audio device.
*/

#ifndef __SwivelAutotune__String__
#define __SwivelAutotune__String__

#include <iostream>
#include "../JuceLibraryCode/JuceHeader.h"
#include <fftw3.h>

class SwivelString : public AudioIODeviceCallback
{
public:
    SwivelString(fftw_plan, double* input, fftw_complex* output, int fft_size);
    ~SwivelString();
    //===========================================
    void audioDeviceIOCallback(const float** inputChannelData,
                               int numInputChannels,
                               float** outputChannelData,
                               int numOutputChannels,
                               int numSamples);
    void audioDeviceAboutToStart(AudioIODevice* device);
    void audioDeviceStopped();
    
private:
    fftw_plan fft_plan;
    double* input;
    fftw_complex* output;
    int fft_size;
    
    int minBin, maxBin;
    double* input_buffer;
    double* magnitudes;
    
    //=============================================
    double magnitude(fftw_complex);
};

#endif /* defined(__SwivelAutotune__String__) */
