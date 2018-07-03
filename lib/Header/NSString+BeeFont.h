//
//  NSString+BeeFont.h
//
//  Created by 林述灿 on 2017/7/20.
//  Copyright © 2017年 Beemans. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (BeeFont)

- (CGSize) stringSizeWithFont:(UIFont *)font;
- (CGSize) stringSizeWithFont:(UIFont *)font forWidth:(CGFloat)width;
- (CGSize) stringSizeWithFont:(UIFont *)font forWidth:(CGFloat)width paragraphStyle:(NSParagraphStyle*)style;
- (CGSize) stringSizeWithAttributes:(NSDictionary *)attributes forWidth:(CGFloat)width;

- (CGFloat) stringWidthWithFont:(UIFont *)font forMaxWidth:(CGFloat)maxWidth;
- (CGFloat) stringHeightWithFont:(UIFont *)font forMaxWidth:(CGFloat)width;

@end
