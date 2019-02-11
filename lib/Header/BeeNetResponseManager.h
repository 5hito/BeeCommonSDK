//
//  BeeNetResponseManager.h
//  BeeCommonSDK
//
//  Created by linshucan on 2019/2/11.
//  Copyright © 2019年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeeNetData.h"

@interface BeeNetResponseManager : NSObject

+ (BeeNetData*)BeeDecodeDataFromServer:(NSString*)data;
+ (BeeNetData*)BeeDecodeDataFromServer:(NSString*)data desKey:(NSString*)desKey;
+ (BeeNetData*)BeeNetRequestError;

@end


