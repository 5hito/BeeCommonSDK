//
//  BeeMacro.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/11.
//  Copyright © 2018年 Bee. All rights reserved.
//

#ifndef BeeMacro_h
#define BeeMacro_h

#define BeeSTAUS_HEIGHT (20)
#define BeeTOPBAR_HEGITH (64)
#define BeeNAVIGATION_TOP_HEIGHT (44)//横屏32
#define BeeToolBar_Height       49//(47)

#define BeeScreenBounds ([UIScreen mainScreen].bounds)
#define BeeScreenWidth ([UIScreen mainScreen].bounds.size.width)
#define BeeScreenHeight ([UIScreen mainScreen].bounds.size.height)
#define BeeAppKeyWindow ([UIApplication sharedApplication].keyWindow)

#define IsIphone4  (CGRectGetHeight([UIScreen mainScreen].bounds) == 640 ? YES : NO)
#define IsIphone5  (CGRectGetHeight([UIScreen mainScreen].bounds) == 568 ? YES : NO)
#define IsIphone6  (CGRectGetHeight([UIScreen mainScreen].bounds) == 667 ? YES : NO)
#define IsIphone6P (CGRectGetHeight([UIScreen mainScreen].bounds) == 736 ? YES : NO)
#define IsIphoneX  (CGRectGetHeight([UIScreen mainScreen].bounds) == 812 ? YES : NO)

#define IsUpIphone5 (CGRectGetHeight([UIScreen mainScreen].bounds) > 568 ? YES : NO)
#define IsUpIphone6 (CGRectGetHeight([UIScreen mainScreen].bounds) > 667 ? YES : NO)
#define Iphone6Width    (375) //750
#define Iphone6Height   (667) //1334
#define Iphone6PWidth   (414) //1242
#define Iphone6PHeight  (736) //2208
#define IphoneXWidth    (375) //1125
#define IphoneXHeight   (812) //2236

#define BeeGrayColor ([UIColor colorWithRed:215/255.0f green:215/255.0f blue:215/255.0f alpha:0.5])
#define RandomColor ( CGFloat red = ( arc4random() % 256 / 255.0 ); CGFloat green = ( arc4random() % 256 / 255.0 ); CGFloat blue = ( arc4random() % 256 / 255.0 ); return [UIColor colorWithRed:red green:green blue:blue alpha:1.0f]; )

//默认过期时间 24h
#define DEFAULT_OVERTIME    (24*60*60)

#endif /* BeeMacro_h */
