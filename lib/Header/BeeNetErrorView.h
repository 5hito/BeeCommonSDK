//
//  BeeNetErrorView.h
//  BeeCommonSDK
//
//  Created by linshucan on 2018/3/30.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import "BeeView.h"

@protocol BeeNetErrorDelegate;

@interface BeeNetErrorView : BeeView

@property (nonatomic, weak) id <BeeNetErrorDelegate>delegate;

@end

@protocol BeeNetErrorDelegate <NSObject>

- (void)BeeNetErrorTryRefleshAction:(BeeNetErrorView*)errorView;

@end
