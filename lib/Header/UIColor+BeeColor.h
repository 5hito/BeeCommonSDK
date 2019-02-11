//
//  UIColor+BeeColor.h
//  BeeCommonSDK
//
//  Created by linshucan on 2019/2/11.
//  Copyright © 2019年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (BeeColor)

+ (UIColor*)BeeColorWithRGB:(NSInteger)rgb;
+ (UIColor*)BeeColorWithRGBA:(NSUInteger)rgba;
+ (UIColor*)BeeColorWithHexString:(NSString*)colorString;

@end

