//
//  BeeMacro.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/11.
//  Copyright © 2018年 Bee. All rights reserved.
//

#ifndef BeeMacro_h
#define BeeMacro_h

#define BeeSTAUS_HEIGHT (BeeIsUpIphoneX? 44 : 20)
#define BeeNAVIGATION_TOP_HEIGHT (44)//横屏32
#define BeeTOPBAR_HEGITH (BeeSTAUS_HEIGHT+BeeNAVIGATION_TOP_HEIGHT)
#define BeeToolBar_Height       49//(47)
#define BeeSafeAreaBottomHeight (BeeIsUpIphoneX? 34 : 0)
#define BeeBottomToolBarHeight (BeeToolBar_Height+BeeSafeAreaBottomHeight)

#define BeeScreenBounds ([UIScreen mainScreen].bounds)
#define BeeScreenWidth ([UIScreen mainScreen].bounds.size.width)
#define BeeScreenHeight ([UIScreen mainScreen].bounds.size.height)
#define BeeAppKeyWindow ([UIApplication sharedApplication].keyWindow)

#define BeeIsIpad     (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define BeeIsIphone4  (CGRectGetHeight([UIScreen mainScreen].bounds) == 480 ? YES : NO)
#define BeeIsIphone5  (CGRectGetHeight([UIScreen mainScreen].bounds) == 568 ? YES : NO)
#define BeeIsIphone6  (CGRectGetHeight([UIScreen mainScreen].bounds) == 667 ? YES : NO)
#define BeeIsIphone6P (CGRectGetHeight([UIScreen mainScreen].bounds) == 736 ? YES : NO)
#define BeeIsIphoneX  (CGRectGetHeight([UIScreen mainScreen].bounds) == 812 ? YES : NO)
#define BeeIsIphoneXMax  (CGRectGetHeight([UIScreen mainScreen].bounds) == 896 ? YES : NO)

#define BeeIsUpIphone5 (CGRectGetHeight([UIScreen mainScreen].bounds) > 568 ? YES : NO)
#define BeeIsUpIphone6 (CGRectGetHeight([UIScreen mainScreen].bounds) > 667 ? YES : NO)
#define BeeIsUpIphoneX (BeeIsIpad ? NO : (CGRectGetHeight([UIScreen mainScreen].bounds) >= 812 ? YES : NO))

#define BeeIphone4Width         (320) //640
#define BeeIphone4Height        (480) //960
#define BeeIphone5Width         (320) //640
#define BeeIphone5Height        (568) //1136
#define BeeIphone6Width         (375) //750
#define BeeIphone6Height        (667) //1334
#define BeeIphone6PWidth        (414) //1242
#define BeeIphone6PHeight       (736) //2208
#define BeeIphoneXWidth         (375) //1125
#define BeeIphoneXHeight        (812) //2436
#define BeeIphoneXRWidth        (414) //828
#define BeeIphoneXRHeight       (896) //1792
#define BeeIphoneXSMaxWidth     (414) //1242
#define BeeIphoneXSMaxHeight    (896) //2688

#define BeeGrayColor ([UIColor colorWithRed:215/255.0f green:215/255.0f blue:215/255.0f alpha:0.5])

//arc4random() 与 arc4random_uniform() 区别，后者直接生成某个数以内的值
#define BeeRandomColor ( CGFloat red = ( arc4random() % 256 / 255.0 ); CGFloat green = ( arc4random() % 256 / 255.0 ); CGFloat blue = ( arc4random() % 256 / 255.0 ); return [UIColor colorWithRed:red green:green blue:blue alpha:1.0f]; )

//默认过期时间 24h
#define BeeDEFAULT_OVERTIME    (24*60*60)

#define BeeWeakSelf __weak __typeof(self)weakSelf = self;
#define BeeStrongSelf __strong __typeof(weakSelf) strongSelf = weakSelf;

#define BeeDLog(fmt, ...) NSLog((@"[文件名:%s]\t" "[函数名:%s]\t" "[行号:%d] \t" fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);

#endif /* BeeMacro_h */


