//
//  YYTextComponent.h
//  YYText
//
//  Layered public entry for layout, input and text interaction components.
//

#import <UIKit/UIKit.h>

#if __has_include(<YYText/YYText.h>)
#import <YYText/YYTextDebugOption.h>
#import <YYText/YYTextInput.h>
#import <YYText/YYTextKeyboardManager.h>
#import <YYText/YYTextLayout.h>
#import <YYText/YYTextLine.h>
#import <YYText/YYTextContainerView.h>
#import <YYText/YYTextMagnifier.h>
#import <YYText/YYTextSelectionView.h>
#import <YYText/YYTextEffectWindow.h>
#else
#import "YYTextDebugOption.h"
#import "YYTextInput.h"
#import "YYTextKeyboardManager.h"
#import "YYTextLayout.h"
#import "YYTextLine.h"
#import "YYTextContainerView.h"
#import "YYTextMagnifier.h"
#import "YYTextSelectionView.h"
#import "YYTextEffectWindow.h"
#endif
