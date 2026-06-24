//
//  YYTextUtility.h
//  YYText
//
//  Layered public entry for utility categories and helpers.
//

#import <UIKit/UIKit.h>

#if __has_include(<YYText/YYText.h>)
#import <YYText/NSAttributedString+YYText.h>
#import <YYText/NSParagraphStyle+YYText.h>
#import <YYText/UIPasteboard+YYText.h>
#import <YYText/UIView+YYText.h>
#import <YYText/YYTextAsyncLayer.h>
#import <YYText/YYTextTransaction.h>
#import <YYText/YYTextUtilities.h>
#import <YYText/YYTextWeakProxy.h>
#else
#import "NSAttributedString+YYText.h"
#import "NSParagraphStyle+YYText.h"
#import "UIPasteboard+YYText.h"
#import "UIView+YYText.h"
#import "YYTextAsyncLayer.h"
#import "YYTextTransaction.h"
#import "YYTextUtilities.h"
#import "YYTextWeakProxy.h"
#endif
