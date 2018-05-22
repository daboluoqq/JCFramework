//
//  DataUtils.cpp
//  Trttc
//
//  Created by 饶 忠雄 on 15/6/23.
//
//

#include "DataUtils.h"
#include "base64.h"

USING_NS_CC;

void DataUtils::setBoolForKey(const char *key, bool value)
{
    std::string str = Value(value).asString();
    std::string encoded = base64_encode(reinterpret_cast<const unsigned char*>(str.c_str()), (unsigned int)str.length());
    UserDefault::getInstance()->setStringForKey(key, encoded);
    UserDefault::getInstance()->flush();
}

bool DataUtils::getBoolValue(const char *key)
{
    const std::string pCountStr = UserDefault::getInstance()->getStringForKey(key);
    std::string decoded = base64_decode(pCountStr);
    return Value(decoded).asBool();
}

void DataUtils::setIntForKey(const char* key, int value)
{
    std::string str = Value(value).asString();
    std::string encoded = base64_encode(reinterpret_cast<const unsigned char*>(str.c_str()), (unsigned int)str.length());
    UserDefault::getInstance()->setStringForKey(key, encoded);
    UserDefault::getInstance()->flush();
}

int DataUtils::getIntValue(const char* key)
{
    const std::string pCountStr = UserDefault::getInstance()->getStringForKey(key, "MA==");
    std::string decoded = base64_decode(pCountStr);
    return Value(decoded).asInt();
}

void DataUtils::setStringForKey(const char* key, std::string value)
{
    std::string encoded = base64_encode(reinterpret_cast<const unsigned char*>(value.c_str()), (unsigned int)value.length());
    UserDefault::getInstance()->setStringForKey(key, encoded);
    UserDefault::getInstance()->flush();
}

std::string DataUtils::getStringValue(const char* key)
{
    const std::string pCountStr = UserDefault::getInstance()->getStringForKey(key, "MA==");
    std::string decoded = base64_decode(pCountStr);
    return decoded;
}

