//
//  BeeTabbarItem.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/11.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeeTabBarItem : NSObject

@property (nonatomic, strong) UINavigationController* viewNavCtrl;
@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) UIImage* normalImg;
@property (nonatomic, strong) UIImage* selectImg;

@end
