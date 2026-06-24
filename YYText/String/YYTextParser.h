//
//  YYTextParser.h
//  YYText
//
//  Public parser protocol used by text components.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 The YYTextParser protocol defines how a parser mutates attributed text before display/edit.
 */
@protocol YYTextParser <NSObject>
@required

/**
 Parse and mutate the attributed text in place.

 @param text The mutable attributed text to parse.
 @param selectedRange The current selected range for context-sensitive parsing.
 @return Whether the parser changed the text.
 */
- (BOOL)parseText:(NSMutableAttributedString *)text selectedRange:(nullable NSRangePointer)selectedRange;

@optional

/**
 Whether the parser should be called again after text replacement.
 */
- (BOOL)canParseUndo;

@end

NS_ASSUME_NONNULL_END
