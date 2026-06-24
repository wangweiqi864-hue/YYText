//
//  YYTextString.h
//  YYText
//
//  Layered public entry for text attribute and archive types.
//

#import <UIKit/UIKit.h>

#if __has_include(<YYText/YYText.h>)
#import <YYText/YYTextAttribute.h>
#import <YYText/YYTextArchiver.h>
#import <YYText/YYTextParser.h>
#import <YYText/YYTextRunDelegate.h>
#import <YYText/YYTextRubyAnnotation.h>
#else
#import "YYTextAttribute.h"
#import "YYTextArchiver.h"
#import "YYTextParser.h"
#import "YYTextRunDelegate.h"
#import "YYTextRubyAnnotation.h"
#endif
