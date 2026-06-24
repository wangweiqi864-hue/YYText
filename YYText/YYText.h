//
//  YYText.h
//  YYText <https://github.com/ibireme/YYText>
//
//  Created by ibireme on 15/2/25.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

#if __has_include(<YYText/YYText.h>)
FOUNDATION_EXPORT double YYTextVersionNumber;
FOUNDATION_EXPORT const unsigned char YYTextVersionString[];
#import <YYText/YYLabel.h>
#import <YYText/YYTextView.h>
#import <YYText/YYTextString.h>
#import <YYText/YYTextComponent.h>
#import <YYText/YYTextUtility.h>
#else
#import "YYLabel.h"
#import "YYTextView.h"
#import "String/YYTextString.h"
#import "Component/YYTextComponent.h"
#import "Utility/YYTextUtility.h"
#endif
