//
//  DataUtils.h
//  Trttc
//
//  Created by 饶 忠雄 on 15/6/23.
//
//

#ifndef __Trttc__DataUtils__
#define __Trttc__DataUtils__

#include <stdio.h>
#include "cocos2d.h"

class DataUtils : cocos2d::Ref
{
public:
    
    static void setBoolForKey(const char* key, bool value);
    
    static bool getBoolValue(const char* key);
    
    static void setIntForKey(const char* key, int value);
    
    static int getIntValue(const char* key);
    
    static void setStringForKey(const char* key, std::string value);
    
    static std::string getStringValue(const char* key);
};

#endif /* defined(__Trttc__DataUtils__) */
