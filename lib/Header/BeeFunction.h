//
//  BeeFunction.h
//  BeeCommonLibrary
//
//  Created by linshucan on 2018/2/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark 字符串encode、decode
NSString* BeeDecodeStringFromString(NSString* string);
NSString* BeeEncodeStringFromString(NSString* string);
NSString* BeePercentEscapedStringFromString(NSString* string);
NSString* BeeStringByTrimmingCharactersInSetForAll(NSString* key,NSCharacterSet* charset);
NSString* BeeRemoteNotificationsToken(NSData* deviceToken);

#pragma mark md5
NSString* BeeMD5StringFromString(NSString* string);

#pragma mark 设备idfi
NSString* BeeAdvertisingIdentifier(void);

#pragma mark DES加解密：默认采用sdk自带key,desKey必须24位 否则sdk采用默认值
NSString* BeeDecrypt3DESFromString(NSString* string);
NSString* BeeDecrypt3DESFromStringWithKey(NSString* string, NSString* desKey);
NSString* BeeEncrypt3DESFromString(NSString* string);
NSString* BeeEncrypt3DESFromStringWithKey(NSString* string, NSString* desKey);

#pragma mark 将字典与字符串互转
NSString* BeeDictionaryTurnToJsonString(NSDictionary* dic);
NSDictionary* BeeJsonStringTurnToDicionary(NSString* jsonStr);

#pragma mark 包相关
NSString* BeeAppBundleIdentifier(void);
NSString* BeeAppVersion(void);
NSString* BeeAppName(void);
BOOL BeeSystemVesionIsUp(CGFloat ver);
NSInteger BeeAppVersionCompare(NSString *v1, NSString *v2);
BOOL BeeAppIsApprovedByVersion(NSString* ver);
NSString* RL(NSString* key);
UIImage* BeeImage(NSString* name);

#pragma mark 目录相关
NSString* BeeAppFilePath(void); //应用目录
NSString* BeeAppHomeFilePath(void); //根目录
NSString* BeeAppRootFilePath(void); //沙盒根目录
NSString* BeeAppDocumentFilePath(void); //document目录
NSString* BeeAppLibraryFilePath(void); //Library目录
NSString* BeeAppTmpFilePath(void); //tmp目录
NSString* BeeAppPreferenceFilePath(void);//默认文件夹
NSString* BeeAppPreferencePathWithFile(NSString* file);
NSString* BeeAppFilePathWithFile(NSString* file);
NSString* BeeAppTmpCachePath(void);
NSString* BeeAppTmpCacheFilePath(NSString* file);
NSString* BeeAppPreferencePathWithFolder(NSString* folder);//可定义文件夹

#pragma mark 图片处理
UIImage* BeeResizableImageWithCapInsets(UIEdgeInsets insets,UIImage* img);
UIImage* BeeResizableImageWithImg(UIImage* img);
UIImage* BeeImageFromViewByRect(UIView* view, CGRect rect);
UIImage* BeeThumbImgFromImage(UIImage* image);
UIImage* BeeBundleImage(NSString* imgFile);
UIImage* BeeHandleGrayImage(UIImage *sourceImage);

#pragma mark 时间相关
NSInteger BeeCurrentTime(void);
NSString* BeeTimeSince1970(void);
NSString* BeeTimeStringByTimeInterval(NSInteger timeInterval);
NSString* BeeTimeStringByString(NSString* timeString);
NSString* BeeTimeString(NSInteger timeInterval);
NSInteger BeeTimeTurnToTimestamp(NSString* formatTime);
NSString* BeeTimeDescribeFormTimestamp(NSInteger timeInterval);
NSString* BeeWeakTimeFormTimestamp(NSInteger timeInterval);

#pragma mark 文件操作
NSDate* BeeFileCreateTimeDate(NSString* file);
BOOL BeeIsOverDueFile(NSString* file, long overTime);
BOOL BeeIsDefaultOverDueFile(NSString* file);

#pragma mark 颜色处理
//将颜色字符串转成UIColor #44a100 - > uicolor
UIColor* BeeColorWithHexString(NSString *stringToConvert);

#pragma mark Log
void BeeLog(NSString *format, ...);
