//
//  MainComponent.h
//  SwivelAutotune
//
//  Created by Paul Francis Cunninghame Mathews on 18/11/13.
//
//

#ifndef __SwivelAutotune__MainComponent__
#define __SwivelAutotune__MainComponent__

#include "../JuceLibraryCode/JuceHeader.h"

class MainComponent : public Component
{
public:
    MainComponent();
    ~MainComponent();
    
    void paint(Graphics& g);
    void resized();
    void buttonClicked(Button* button);
    
private:
    //stuff
    
    //==========================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};


#endif /* defined(__SwivelAutotune__MainComponent__) */
