//
//  base64.h
//  JellysRush
//
//  Created by 饶 忠雄 on 14-2-26.
//
//

#ifndef __JellysRush__base64__
#define __JellysRush__base64__

#include <string>

std::string base64_encode(unsigned char const* , unsigned int len);
std::string base64_decode(std::string const& s);

#endif /* defined(__JellysRush__base64__) */
