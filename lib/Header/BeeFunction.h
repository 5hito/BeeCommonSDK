//
//  BeeFunction.h
//  BeeCommonLibrary
//
//  Created by linshucan on 2018/2/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark 字符串encode、decode
NSString* decodeStringFromString(NSString* string);
NSString* encodeStringFromString(NSString* string);
NSString* percentEscapedStringFromString(NSString* string);
NSString* stringByTrimmingCharactersInSetForAll(NSString* key,NSCharacterSet* charset);

#pragma mark md5
NSString* getMD5StringFromString(NSString* string);

#pragma mark 设备idfi
NSString* getadvertisingIdentifier(void);

#pragma mark DES加解密：默认采用sdk自带key,desKey必须24位 否则sdk采用默认值
NSString* decrypt3DESFromString(NSString* string);
NSString* decrypt3DESFromStringWithKey(NSString* string, NSString* desKey);
NSString* encrypt3DESFromString(NSString* string);
NSString* encrypt3DESFromStringWithKey(NSString* string, NSString* desKey);

#pragma mark 将字典转字符串
NSString* dictionaryTurnToString(NSDictionary* dic);

#pragma mark 包相关
NSString* appBundleIdentifier(void);
NSString* appVersion(void);
NSString* appName(void);
BOOL systemVesionIsUp(CGFloat ver);
NSInteger appVersionCompare(NSString *v1, NSString *v2);
NSInteger appStoreAppVersionCompare(NSString *v1);

#pragma mark 目录相关
NSString* appFilePath(void); //应用目录
NSString* appHomeFilePath(void); //根目录
NSString* appRootFilePath(void); //沙盒根目录
NSString* appDocumentFilePath(void); //document目录
NSString* appLibraryFilePath(void); //Library目录
NSString* appTmpFilePath(void); //tmp目录
NSString* appPreferenceFilePath(void);
NSString* appPreferencePathWithFile(NSString* file);
NSString* appFilePathWithFile(NSString* file);
NSString* appTmpCachePath(void);
NSString* appTmpCacheFilePath(NSString* file);

#pragma mark 图片处理
UIImage* resizableImageWithCapInsets(UIEdgeInsets insets,UIImage* img);
UIImage* resizableImageWithImg(UIImage* img);
UIImage* getImageFromViewByRect(UIView* view, CGRect rect);
UIImage* getThumbImgFromImage(UIImage* image);
UIImage* bundleImage(NSString* imgFile);
UIImage* getHandleGrayImage(UIImage *sourceImage);

#pragma mark 时间相关
NSInteger getCurrentTime(void);
NSString* getTimeSince1970(void);
NSString* getTimeStringByTimeInterval(NSInteger timeInterval);
NSString* getTimeStringByString(NSString* timeString);
NSString* getTimeString(NSInteger timeInterval);

#pragma mark 文件操作
NSDate* getFileCreateTimeDate(NSString* file);
BOOL isOverDueFile(NSString* file, long overTime);
BOOL isDefaultOverDueFile(NSString* file);

#pragma mark 颜色处理
//将颜色字符串转成UIColor #44a100 - > uicolor
UIColor* colorWithHexString(NSString *stringToConvert);

