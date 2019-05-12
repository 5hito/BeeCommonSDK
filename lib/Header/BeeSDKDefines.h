//
//  BeeSDKDefines.h
//  BeeCommonExample
//
//  Created by linshucan on 2019/5/12.
//  Copyright © 2019 Bee. All rights reserved.
//

#ifndef BeeSDKDefines_h
#define BeeSDKDefines_h

#if defined(__cplusplus)
    #define BEE_EXTERN extern "C" __attribute__((visibility("default")))
#else
    #define BEE_EXTERN extern __attribute__((visibility("default")))
#endif  // defined(__cplusplus)

#if defined(__has_feature) && defined(__has_attribute)
    #if __has_feature(attribute_deprecated_with_message)
        #define BEE_DEPRECATED_MSG_ATTRIBUTE(s) __attribute__((deprecated(s)))
    #elif __has_attribute(deprecated)
        #define BEE_DEPRECATED_MSG_ATTRIBUTE(s) __attribute__((deprecated))
    #else
        #define BEE_DEPRECATED_MSG_ATTRIBUTE(s)
    #endif  // __has_feature(attribute_deprecated_with_message)

    #if __has_attribute(deprecated)
        #define BEE_DEPRECATED_ATTRIBUTE __attribute__((deprecated))
    #else
        #define BEE_DEPRECATED_ATTRIBUTE
    #endif  // __has_attribute(deprecated)
#else
    #define BEE_DEPRECATED_ATTRIBUTE
    #define BEE_DEPRECATED_MSG_ATTRIBUTE(s)
#endif  // defined(__has_feature) && defined(__has_attribute)


#ifndef BeeWeakify
    #if DEBUG
        #if __has_feature(objc_arc)
            #define BeeWeakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;
        #else
            #define BeeWeakify(object) autoreleasepool{} __block __typeof__(object) block##_##object = object;
        #endif
    #else
        #if __has_feature(objc_arc)
            #define BeeWeakify(object) try{} @finally{} {} __weak __typeof__(object) weak##_##object = object;
        #else
            #define BeeWeakify(object) try{} @finally{} {} __block __typeof__(object) block##_##object = object;
        #endif
    #endif
#endif

#ifndef BeeStrongify
    #if DEBUG
        #if __has_feature(objc_arc)
            #define BeeStrongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;
        #else
            #define BeeStrongify(object) autoreleasepool{} __typeof__(object) object = block##_##object;
        #endif
    #else
        #if __has_feature(objc_arc)
            #define BeeStrongify(object) try{} @finally{} __typeof__(object) object = weak##_##object;
        #else
            #define BeeStrongify(object) try{} @finally{} __typeof__(object) object = block##_##object;
        #endif
    #endif
#endif

#if __has_include("KochavaTracker.h")
    #import "KochavaTracker.h"
    #define BeeKochavaTrackerCode(code) code
#else
    #define BeeKochavaTrackerCode(code)
#endif

#endif /* BeeSDKDefines_h */
