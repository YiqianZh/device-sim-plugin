/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Images.h is used to declare the various images used with the plugin
 
    Author: Jason Loveridge
    Date: 05/2018
    BBC Research & Development
                                                                    //[/Comments]
*/
class Images  : public Component
{
public:
    //==============================================================================
    Images ();
    ~Images();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;

    // Binary resources:
    static const char* cubeCropped_png;
    static const int cubeCropped_pngSize;
    static const char* iPhoneCropped_png;
    static const int iPhoneCropped_pngSize;
    static const char* tvcropped_png;
    static const int tvcropped_pngSize;
    static const char* macBookCropped2_png;
    static const int macBookCropped2_pngSize;
    static const char* genelec6010_png;
    static const int genelec6010_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Images)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
