#include "ofMain.h"

#if defined(_MSC_VER) || defined(_WIN32) || define(WIN64) || define(WIN32)
    #include "ofxSpout2Sender.h"
#else
    #include "ofxSyphon.h"
#endif



class SharedTextureSender;
typedef std::shared_ptr<Mapping> SharedTextureSenderRef;

class SharedTextureSender{
public:

    SharedTextureSender();

    SharedTextureSenderRef create(){
        return std::make_shared<SharedTextureSender>();
    }

private:


};
